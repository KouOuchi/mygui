include_directories(${MYGUI_SOURCE_DIR}/Plugins/Plugin_StrangeButton)
mygui_demo(Demo_PluginStrangeButton)
add_dependencies(Demo_PluginStrangeButton Plugin_StrangeButton)
find_library(L_DEMO_P_SB, Plugin_StrangeButton)
target_link_libraries(Demo_PluginStrangeButton ${L_DEMO_P_SB})
