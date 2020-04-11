#pragma once
class c_mantle_shader_gui_tab :
	public c_mantle_gui_tab
{
public:
	c_mantle_shader_gui_tab() = delete;
	c_mantle_shader_gui_tab(const c_mantle_shader_gui_tab&) = delete;
	c_mantle_shader_gui_tab& operator=(const c_mantle_shader_gui_tab&) = delete;

	c_mantle_shader_gui_tab(c_cache_file& cache_file, c_mantle_gui_tab* parent_tag, v_tag_interface_legacy<s_shader_definition_legacy>& shader_tag_interface);
	virtual ~c_mantle_shader_gui_tab();

	c_cache_file& cache_file;
	c_mantle_gui_tab* parent_tag;
	v_tag_interface_legacy<s_shader_definition_legacy>& shader_tag_interface;
protected:
	void render_tab_contents_gui() override;
};

