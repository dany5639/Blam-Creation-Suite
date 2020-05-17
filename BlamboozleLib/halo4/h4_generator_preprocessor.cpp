#include "blamboozlelib-private-pch.h"

class c_h4_tag_group_container;




c_h4_source_file::c_h4_source_file(const char* filepath, c_h4_generator_preprocessor& preprocessor) :
	preprocessor(preprocessor),
	is_header(string_ends_with(filepath, ".h")),
	is_inline(string_ends_with(filepath, ".inl")),
	source_output_filepath(filepath),
	header_output_filepath(filepath),
	full_source_output_filepath(),
	full_header_output_filepath(),
	tag_groups()
{
	std::string output_directory = c_command_line::get_command_line_arg("-generated-output");
	ASSERT(!output_directory.empty());

	source_output_filepath = filepath;
	header_output_filepath = filepath;
	header_output_filepath.resize(header_output_filepath.size() - 3);
	header_output_filepath += "h";

	full_source_output_filepath = output_directory + "\\" + source_output_filepath;
	full_header_output_filepath = output_directory + "\\" + header_output_filepath;
}

c_h4_tag_group_container::c_h4_tag_group_container(c_h4_tag_group& tag_group, c_h4_generator_preprocessor& preprocessor, c_h4_source_file& source_file) :
	tag_group(tag_group),
	source_file(source_file),
	name(tag_group.name),
	symbol_name(name),
	name_uppercase(),
	define_tag_group_block_and_fields(true)
{
	REFERENCE_ASSERT(tag_group);
	REFERENCE_ASSERT(source_file);

	// #TODO: Use a better name based off of the group tag and the known String ID's

	// create the block ready for traversal so we can reserve structure names for tag groups as priority

	//bool define_fields_candidate = string_ends_with(tag_group.tag_block.name, "_block");
	std::string expected_name = name + "_block";
	bool define_fields_candidate = tag_group.tag_block.name == expected_name;
	tag_block_container = &preprocessor.traverse_tag_blocks(tag_group.tag_block, define_fields_candidate, false);
	tag_struct_container = tag_block_container->tag_struct_container;
	tag_struct_container->is_tag_group = true;

	// #NOTE: If the struct isn't a block, we have to create a block to be able to use the structure!
	define_tag_group_block_and_fields = tag_struct_container->is_block && define_fields_candidate;
	tag_block_container->defined_by_tag_group = define_tag_group_block_and_fields;



	if (!tag_block_container->use_tag_block_definition)
	{
		ASSERT(!tag_struct_container->is_block);
	}


	if (define_tag_group_block_and_fields) // fixups
	{
		std::string expected_block_symbol_name = name + "_block";
		tag_block_container->symbol_name = expected_block_symbol_name;

		//std::string expected_struct_symbol_name = name + "_block_struct";
		std::string expected_struct_symbol_name = name;
		tag_struct_container->symbol_name = expected_struct_symbol_name;
	}
	symbol_name = name + "_group";
	if (symbol_name == tag_struct_container->symbol_name)
	{
		tag_struct_container->symbol_name += "_struct_definition";
	}
	name_uppercase = name;
	std::transform(name_uppercase.begin(), name_uppercase.end(), name_uppercase.begin(), ::toupper);
	source_file.tag_groups.push_back(this);
}

bool c_h4_tag_group_container::operator ==(const c_h4_tag_group_container& container) const
{
	return &tag_group == &container.tag_group;
}

c_h4_tag_block_container::c_h4_tag_block_container(c_h4_tag_block& tag_block, c_h4_generator_preprocessor& preprocessor, bool is_tag) :
	tag_block(tag_block),
	name(tag_block.name),
	symbol_name(name),
	name_uppercase(),
	use_tag_block_definition(true),
	defined_by_tag_group(is_tag),
	has_traversed(false)
{
	REFERENCE_ASSERT(tag_block);

	uint32_t index = preprocessor.tag_type_name_unique_counter[name]++;
	if (index > 0)
	{
		std::string suffix = std::to_string(index + 1);
		name += "$";
		name += suffix;
	}

	//std::string expected_struct_name = std::string(tag_block.tag_struct.name) + "_block_struct";
	//use_tag_block_definition = expected_struct_name == tag_block.tag_struct.name;
	use_tag_block_definition = string_ends_with(tag_block.tag_struct.name, "_block_struct") || (std::string(tag_block.name) == tag_block.tag_struct.name);
	// && !string_ends_with(tag_block.tag_struct.name, "_struct_definition");
	tag_struct_container = &preprocessor.traverse_tag_structs(tag_block.tag_struct, use_tag_block_definition, tag_block.is_array, true);
	tag_struct_container->is_block = use_tag_block_definition;

	if (tag_block.is_block)
	{
		symbol_name = name + "_block";
	}
	if (tag_block.is_array)
	{
		symbol_name = name + "_array";
	}
	name_uppercase = name;
	std::transform(name_uppercase.begin(), name_uppercase.end(), name_uppercase.begin(), ::toupper);
	preprocessor.tag_block_containers.push_back(this);
}

bool c_h4_tag_block_container::operator ==(const c_h4_tag_block_container& container) const
{
	return &tag_block == &container.tag_block;
}

c_h4_tag_struct_container::c_h4_tag_struct_container(c_h4_tag_struct& tag_struct, c_h4_generator_preprocessor& preprocessor, bool is_block, bool is_array) :
	tag_struct(tag_struct),
	name(tag_struct.name),
	symbol_name(name),
	name_uppercase(),
	is_block(is_block),
	is_array(is_array),
	is_tag_group(false),
	has_traversed(false)
{
	REFERENCE_ASSERT(tag_struct);

	uint32_t index = preprocessor.tag_type_name_unique_counter[name]++;
	if (!is_block)
	{
		//name = name.substr(0, name.rfind("_struct"));
		if (index > 0)
		{
			std::string suffix = std::to_string(index + 1);
			name += "$";
			name += suffix;
		}
	}

	symbol_name = name;
	name_uppercase = name;
	std::transform(name_uppercase.begin(), name_uppercase.end(), name_uppercase.begin(), ::toupper);
	preprocessor.tag_struct_containers.push_back(this);
}

bool c_h4_tag_struct_container::operator ==(const c_h4_tag_struct_container& container) const
{
	return &tag_struct == &container.tag_struct;
}

c_h4_tag_enum_container::c_h4_tag_enum_container(c_h4_tag_enum& tag_enum, c_h4_generator_preprocessor& preprocessor) :
	tag_enum(tag_enum),
	name(tag_enum.name),
	symbol_name(name),
	name_uppercase()
{
	REFERENCE_ASSERT(tag_enum);

	uint32_t index = preprocessor.tag_type_name_unique_counter[name]++;
	if (index > 0)
	{
		std::string suffix = std::to_string(index + 1);
		name += "$";
		name += suffix;
	}

	symbol_name = name;
	name_uppercase = name;
	std::transform(name_uppercase.begin(), name_uppercase.end(), name_uppercase.begin(), ::toupper);
	preprocessor.tag_enum_containers.push_back(this);
}

bool c_h4_tag_enum_container::operator ==(const c_h4_tag_enum_container& container) const
{
	return &tag_enum == &container.tag_enum;
}

c_h4_generator_preprocessor::c_h4_generator_preprocessor(c_h4_blamboozle& blamboozle) :
	blamboozle(blamboozle),
	source_files()
{
	const char* perforce_blofeld_path = "d:\\perforce\\groundhog\\halo4\\shared\\engine\\source\\blofeld\\";
	for (c_h4_tag_group* tag_group : blamboozle.tag_groups) // create containers for tag groups and associate with source file
	{
		const char* perforce_path = strstr(tag_group->tag_block.tag_struct.filepath, perforce_blofeld_path);
		ASSERT(perforce_path != nullptr);
		const char* filepath = perforce_path + strlen(perforce_blofeld_path);

		c_h4_source_file& source_file = get_source_file(filepath, *this);
		c_h4_tag_group_container* tag_group_container = new c_h4_tag_group_container(*tag_group, *this, source_file);
		tag_group_containers.push_back(tag_group_container);
	}

	for (c_h4_tag_group_container* tag_group_container : tag_group_containers) // traverse tag groups to create tag blocks
	{
		c_h4_tag_group& tag_group = tag_group_container->tag_group;
		traverse_tag_blocks(tag_group.tag_block, tag_group_container->define_tag_group_block_and_fields);
	}
	cleanup_tag_blocks();

	for (c_h4_tag_block_container* tag_block_container : tag_block_containers) // associate tag groups with source file
	{
		c_h4_tag_block& tag_block = tag_block_container->tag_block;

		const char* perforce_path = strstr(tag_block.tag_struct.filepath, perforce_blofeld_path);
		ASSERT(perforce_path != nullptr);
		const char* filepath = perforce_path + strlen(perforce_blofeld_path);

		c_h4_source_file& source_file = get_source_file(filepath, *this);
		source_file.tag_blocks.push_back(tag_block_container);
	}

	for (c_h4_tag_block_container* tag_block_container : tag_block_containers) // traverse tag blocks to create tag structs
	{
		c_h4_tag_block& tag_block = tag_block_container->tag_block;
		traverse_tag_structs(tag_block.tag_struct, true, false, true);
	}
	cleanup_tag_structs();

	for (c_h4_tag_struct_container* tag_struct_container : tag_struct_containers) // associate tag structs with source file
	{
		c_h4_tag_struct& tag_struct = tag_struct_container->tag_struct;

		const char* perforce_path = strstr(tag_struct.filepath, perforce_blofeld_path);
		ASSERT(perforce_path != nullptr);
		const char* filepath = perforce_path + strlen(perforce_blofeld_path);

		c_h4_source_file& source_file = get_source_file(filepath, *this);
		source_file.tag_structs.push_back(tag_struct_container);
	}

	for (std::pair<const void*, c_h4_tag_enum*> tag_enum_key : c_h4_blamboozle::tag_enum_definitions)
	{
		c_h4_tag_enum& tag_enum = *tag_enum_key.second;

		c_h4_tag_enum_container* tag_enum_container = find_existing_tag_enum_container(tag_enum);
		if (tag_enum_container == nullptr)
		{
			tag_enum_container = new c_h4_tag_enum_container(tag_enum, *this);
		}
	}

	for (c_h4_tag_enum_container* tag_enum_container : tag_enum_containers) // associate tag structs with source file
	{
		c_h4_tag_enum& tag_enum = tag_enum_container->tag_enum;

		const char* perforce_path = strstr(tag_enum.filepath, perforce_blofeld_path);
		ASSERT(perforce_path != nullptr);
		const char* filepath = perforce_path + strlen(perforce_blofeld_path);

		c_h4_source_file& source_file = get_source_file(filepath, *this);
		source_file.tag_enums.push_back(tag_enum_container);
	}
}

c_h4_generator_preprocessor::~c_h4_generator_preprocessor()
{

}

c_h4_tag_block_container* c_h4_generator_preprocessor::find_existing_tag_block_container(c_h4_tag_block& tag_block)
{
	for (c_h4_tag_block_container* tag_block_container : tag_block_containers)
	{
		if (&tag_block_container->tag_block == &tag_block)
		{
			return tag_block_container;
		}
	}
	return nullptr;
}

c_h4_tag_struct_container* c_h4_generator_preprocessor::find_existing_tag_struct_container(c_h4_tag_struct& tag_struct)
{
	for (c_h4_tag_struct_container* tag_struct_container : tag_struct_containers)
	{
		if (&tag_struct_container->tag_struct == &tag_struct)
		{
			return tag_struct_container;
		}
	}
	return nullptr;
}

c_h4_tag_enum_container* c_h4_generator_preprocessor::find_existing_tag_enum_container(c_h4_tag_enum& tag_enum)
{
	for (c_h4_tag_enum_container* tag_enum_container : tag_enum_containers)
	{
		if (&tag_enum_container->tag_enum == &tag_enum)
		{
			return tag_enum_container;
		}
	}
	return nullptr;
}

void c_h4_generator_preprocessor::process_tag_block_field(c_h4_tag_field* tag_field)
{
	c_h4_tag_field_block* tag_field_block = dynamic_cast<c_h4_tag_field_block*>(tag_field);
	if (tag_field_block != nullptr)
	{
		c_h4_tag_block* tag_block = tag_field_block->tag_block_definition;
		ASSERT(tag_block != nullptr);
		traverse_tag_blocks(*tag_block);
	}

	c_h4_tag_field_array* tag_field_array = dynamic_cast<c_h4_tag_field_array*>(tag_field);
	if (tag_field_array != nullptr)
	{
		c_h4_tag_array* tag_struct = tag_field_array->tag_array_definition;
		ASSERT(tag_struct != nullptr);
		traverse_tag_blocks(*tag_struct);
	}

	c_h4_tag_field_struct* tag_field_struct = dynamic_cast<c_h4_tag_field_struct*>(tag_field); // found a struct, traverse it for more tag blocks
	if (tag_field_struct != nullptr)
	{
		c_h4_tag_struct* tag_struct = tag_field_struct->tag_struct;
		ASSERT(tag_struct != nullptr);
		traverse_tag_structs(*tag_struct, false, false, true);

		for (c_h4_tag_field* tag_field : tag_struct->tag_fields)
		{
			process_tag_struct_field(tag_field);
		}
	}
}

c_h4_tag_block_container& c_h4_generator_preprocessor::traverse_tag_blocks(c_h4_tag_block& tag_block, bool is_tag, bool traverse)
{
	c_h4_tag_block_container* tag_block_container = find_existing_tag_block_container(tag_block);
	if (tag_block_container == nullptr)
	{
		tag_block_container = new c_h4_tag_block_container(tag_block, *this, is_tag);
	}
	if(traverse && !tag_block_container->has_traversed)
	{
		create_tag_block_source_count_constants(tag_block);

		for (c_h4_tag_field* tag_field : tag_block.tag_struct.tag_fields)
		{
			process_tag_block_field(tag_field);
		}
		tag_block_container->has_traversed = true;
	}
	ASSERT(tag_block_container != nullptr);
	return *tag_block_container;
}

void c_h4_generator_preprocessor::process_tag_struct_field(c_h4_tag_field* tag_field)
{
	c_h4_tag_field_struct* struct_field = dynamic_cast<c_h4_tag_field_struct*>(tag_field);
	//bool x = tag_field->name ? std::string(tag_field->name) == "cache zone manifest" : false;
	if (struct_field != nullptr)
	{
		c_h4_tag_struct* _struct = struct_field->tag_struct;
		ASSERT(_struct != nullptr);
		traverse_tag_structs(*_struct, false, false, true);
	}

	c_h4_tag_field_array* tag_field_array = dynamic_cast<c_h4_tag_field_array*>(tag_field);
	if (tag_field_array != nullptr)
	{
		c_h4_tag_array* tag_array = tag_field_array->tag_array_definition;
		ASSERT(tag_array != nullptr);
		traverse_tag_blocks(*tag_array);
	}

	c_h4_tag_field_block* block_field = dynamic_cast<c_h4_tag_field_block*>(tag_field); // found a block, traverse it for more tag blocks
	if (block_field != nullptr)
	{
		c_h4_tag_block* block = block_field->tag_block_definition;
		ASSERT(block != nullptr);
		traverse_tag_blocks(*block, false, true);

		for (c_h4_tag_field* tag_field : block->tag_struct.tag_fields)
		{
			process_tag_block_field(tag_field);
		}
	}
}

c_h4_tag_struct_container& c_h4_generator_preprocessor::traverse_tag_structs(c_h4_tag_struct& tag_struct, bool is_block, bool is_array, bool traverse)
{
	//bool y = std::string(tag_struct.name) == "cache_file_tag_zone_manifest_struct";
	c_h4_tag_struct_container* tag_struct_container = find_existing_tag_struct_container(tag_struct);
	if (tag_struct_container == nullptr)
	{
		tag_struct_container = new c_h4_tag_struct_container(tag_struct, *this, is_block, is_array);
	}
	if (traverse && !tag_struct_container->has_traversed)
	{
		for (c_h4_tag_field* tag_field : tag_struct.tag_fields)
		{
			process_tag_struct_field(tag_field);
		}
		tag_struct_container->has_traversed = true;
	}
	ASSERT(tag_struct_container != nullptr);
	return *tag_struct_container;
}

void c_h4_generator_preprocessor::cleanup_tag_blocks()
{
	decltype(tag_block_containers)::iterator tag_blocks_new_end = std::unique(tag_block_containers.begin(), tag_block_containers.end());
	tag_block_containers.erase(tag_blocks_new_end, tag_block_containers.end());
}

void c_h4_generator_preprocessor::cleanup_tag_structs()
{
	decltype(tag_struct_containers)::iterator tag_structs_new_end = std::unique(tag_struct_containers.begin(), tag_struct_containers.end());
	tag_struct_containers.erase(tag_structs_new_end, tag_struct_containers.end());
}

c_h4_source_file& c_h4_generator_preprocessor::get_source_file(const char* filepath, c_h4_generator_preprocessor& preprocessor)
{
	c_h4_source_file* source_file = nullptr;
	for (c_h4_source_file* current_source_file : source_files)
	{
		if (current_source_file->source_output_filepath == filepath)
		{
			source_file = current_source_file;
			break;
		}
		if (current_source_file->header_output_filepath == filepath)
		{
			source_file = current_source_file;
			break;
		}
	}

	if (source_file == nullptr)
	{
		source_file = new c_h4_source_file(filepath, preprocessor);
		source_files.push_back(source_file);
	}

	return *source_file;
}

c_h4_tag_group_container* c_h4_generator_preprocessor::get_container_by_group_tag(uint32_t group_tag)
{
	if (group_tag != 0xFFFFFFFF)
	{
		for (c_h4_tag_group_container* tag_group_container : tag_group_containers)
		{
			if (tag_group_container->tag_group.group_tag.value == group_tag)
			{
				return tag_group_container;
			}
		}
	}

	return nullptr;
}

void c_h4_generator_preprocessor::create_tag_block_source_count_constants(c_h4_tag_block& tag_block)
{
	const char* const maximum_element_count_string = tag_block.maximum_element_count_string;

	bool only_contains_digits = true;
	{
		const char* digits_search_string = maximum_element_count_string;
		while (*digits_search_string)
		{
			if (!isdigit(*digits_search_string++))
			{
				only_contains_digits = false;
				break;
			}
		}
	}

	if (!only_contains_digits)
	{
		std::stringstream source_line_stream;


		const char* maximum_element_count_string_namespace_end = strstr(maximum_element_count_string, "::");
		std::vector<std::string>* maximum_count_constants_source_lines = nullptr;
		if (maximum_element_count_string_namespace_end)
		{
			maximum_count_constants_source_lines = &maximum_count_constants_source_lines_struct;
			std::string _namespace = { maximum_element_count_string , maximum_element_count_string_namespace_end };
			maximum_element_count_string_namespace_end += 2;

			source_line_stream << "struct " << _namespace << std::endl;
			source_line_stream << "{" << std::endl;
			source_line_stream << "\tconst unsigned long " << maximum_element_count_string_namespace_end << " = " << tag_block.maximum_element_count << ";" << std::endl;
			source_line_stream << "};" << std::endl;
		}
		else if (islower(*tag_block.maximum_element_count_string) || !isalpha(*tag_block.maximum_element_count_string))
		{
			maximum_count_constants_source_lines = &maximum_count_constants_source_lines_constant;
			source_line_stream << "const unsigned long " << tag_block.maximum_element_count_string << " = " << tag_block.maximum_element_count << ";" << std::endl;
		}
		else
		{
			maximum_count_constants_source_lines = &maximum_count_constants_source_lines_define;
			source_line_stream << "#define " << tag_block.maximum_element_count_string << " " << tag_block.maximum_element_count << std::endl;
		}

		std::string source_line = source_line_stream.str();

		std::vector<std::string>::iterator source_line_search = std::find(
			maximum_count_constants_source_lines->begin(),
			maximum_count_constants_source_lines->end(),
			source_line
		);

		if (source_line_search == maximum_count_constants_source_lines->end())
		{
			maximum_count_constants_source_lines->push_back(source_line);
		}
	}
}