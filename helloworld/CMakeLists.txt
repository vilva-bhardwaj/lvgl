cmake_minimum_required(VERSION 3.12.4)

project(lv_hello HOMEPAGE_URL https://github.com/lvgl/lv_demos)

# Option to define LV_DEMO_CONF_INCLUDE_SIMPLE, default: ON
option(LV_HELLO_CONF_INCLUDE_SIMPLE "Simple include of \"lv_hello_conf.h\"" ON)

# Option to set LV_HELLO_CONF_PATH, if set parent path LV_HELLO_CONF_DIR is added
# to includes
option(LV_HELLO_CONF_PATH "Path defined for lv_hello_conf.h")
get_filename_component(LV_HELLO_CONF_DIR ${LV_HELLO_CONF_PATH} DIRECTORY)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.c) 
add_library(lv_hello STATIC ${SOURCES})
add_library(lvgl_hello ALIAS lv_hello)
add_library(lvgl::hello ALIAS lv_hello)

target_include_directories(lv_hello SYSTEM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
                                                  ${LV_HELLO_CONF_DIR})


target_link_libraries(lv_hello PUBLIC lvgl)