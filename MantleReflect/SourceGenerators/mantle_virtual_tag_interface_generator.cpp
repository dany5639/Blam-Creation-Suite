#include "mantlereflect-private-pch.h"

c_mantle_virtual_tag_interface_generator::c_mantle_virtual_tag_interface_generator(const wchar_t* output_header_file, const wchar_t* output_source_file, std::vector<c_reflection_type_container*>& reflection_types) :
	c_ast_source_generator(output_header_file, output_source_file, reflection_types)
{

}

void c_mantle_virtual_tag_interface_generator::run()
{
	header_string_stream << "#pragma once" << std::endl << std::endl;

	header_string_stream << "#ifdef __INTELLISENSE__" << std::endl;
	header_string_stream << "\ttemplate<typename T>" << std::endl;
	header_string_stream << "\tclass v_tag_interface : public T, public c_tag_interface" << std::endl;
	header_string_stream << "\t{" << std::endl;
	header_string_stream << "\tpublic:" << std::endl;
	header_string_stream << "\t\tv_tag_interface(c_cache_file&, uint16_t)" << std::endl;
	header_string_stream << "\t\t{" << std::endl;
	header_string_stream << "\t\t" << std::endl;
	header_string_stream << "\t\t}" << std::endl;
	header_string_stream << "\t};" << std::endl;
	header_string_stream << "#else" << std::endl;
	header_string_stream << "template<typename T>" << std::endl;
	header_string_stream << "class v_tag_interface : " << std::endl;
	header_string_stream << "\tpublic c_tag_interface" << std::endl;
	header_string_stream << "{" << std::endl;
	header_string_stream << "};" << std::endl << std::endl;

	source_string_stream << "#include <MantleLib/mantlelib-private-pch.h>" << std::endl << std::endl;
	for (c_reflection_type_container* reflection_type_container : reflection_types)
	{
		if (reflection_type_container->raw_tag_group.empty()) continue; // only create virtual tag interfaces for tag types

		write_virtual_tag_interface(header_string_stream, *reflection_type_container);
		write_virtual_tag_initializer(source_string_stream, *reflection_type_container);
	}

	header_string_stream << "#endif" << std::endl; // __INTELLISENSE__
}

void c_mantle_virtual_tag_interface_generator::write_virtual_tag_interface(std::stringstream& stringstream, const c_reflection_type_container& reflection_type_container)
{
	stringstream << "template<>" << std::endl;
	stringstream << "class v_tag_interface<" << reflection_type_container.qualified_type_name << "> : " << std::endl;
	header_string_stream << "\tpublic c_tag_interface" << std::endl;
	stringstream << "{" << std::endl;
	stringstream << "\tpublic:" << std::endl;
	stringstream << "\tc_cache_file& cache_file;" << std::endl;
	stringstream << "\tv_tag_interface(c_cache_file& cache_file, uint16_t tag_index) :" << std::endl;
	stringstream << "\t\c_tag_interface(cache_file, tag_index)," << std::endl;
	stringstream << "\t\tcache_file(cache_file)," << std::endl;

	for (size_t i = 0; i < reflection_type_container.fields.size(); i++)
	{
		bool is_last = i == (reflection_type_container.fields.size() - 1);

		const c_reflection_field_container* reflection_field_container_ptr = reflection_type_container.fields[i];

		assert(reflection_field_container_ptr != nullptr);
		c_reflection_type_container* field_type = reflection_field_container_ptr->field_type;
		assert(field_type != nullptr);

		if (reflection_field_container_ptr->reflection_type_category == ReflectionTypeCategory::TagBlock)
		{
			stringstream << "\t\t" << reflection_field_container_ptr->field_name << "(cache_file, GetData<" << reflection_type_container.qualified_type_name << ">()->" << reflection_field_container_ptr->field_name << ")";
		}
		else
		{
			stringstream << "\t\t" << reflection_field_container_ptr->field_name << "(GetData<" << reflection_type_container.qualified_type_name << ">()->" << reflection_field_container_ptr->field_name << ")";
		}
		if (!is_last) stringstream << ",";
		stringstream << std::endl;
	}
	stringstream << "\t{" << std::endl;
	stringstream << "\t}" << std::endl;

	for (const c_reflection_field_container* reflection_field_container_ptr : reflection_type_container.fields)
	{
		assert(reflection_field_container_ptr != nullptr);
		c_reflection_type_container* field_type = reflection_field_container_ptr->field_type;
		assert(field_type != nullptr);

		if (reflection_field_container_ptr->reflection_type_category == ReflectionTypeCategory::TagBlock)
		{
			assert(reflection_field_container_ptr->array_size == 0); // #TODO: Generate an initializer list

			stringstream << "\t" << "c_virtual_tag_block<" << field_type->qualified_type_name << "::t_value> " << reflection_field_container_ptr->field_name << ";" << std::endl;
		}
		else
		{
			if (reflection_field_container_ptr->array_size == 0)
			{
				stringstream << "\t" << field_type->qualified_type_name << "& " << reflection_field_container_ptr->field_name << ";" << std::endl;
			}
			else
			{
				stringstream << "\t" << field_type->qualified_type_name << "(&" << reflection_field_container_ptr->field_name << ")[" << reflection_field_container_ptr->array_size << "];" << std::endl;
			}
		}
	}

	stringstream << "};" << std::endl;
}

void c_mantle_virtual_tag_interface_generator::write_virtual_tag_initializer(std::stringstream& stringstream, const c_reflection_type_container& reflection_type_container)
{
	stringstream << "c_tag_interface* v_" << reflection_type_container.type_name.substr(2) << "_ctor(c_cache_file& cache_file, uint16_t tag_index)" << std::endl;
	stringstream << "{" << std::endl;
	stringstream << "\treturn new v_tag_interface<" << reflection_type_container.qualified_type_name << ">(cache_file, tag_index);" << std::endl;
	stringstream << "}" << std::endl;
	stringstream << std::endl;
}