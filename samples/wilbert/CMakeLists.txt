
include(cmake/common.cmake)

set(COMMON_SRC_LIST
    "${CMAKE_CURRENT_SOURCE_DIR}/common/window.cpp"
)

add_library(ex_common STATIC ${COMMON_SRC_LIST})
target_link_libraries(ex_common PUBLIC sdl2)

set(EXAMPLES_LIST
    "${CMAKE_CURRENT_SOURCE_DIR}/ex_basic.cpp"
)

foreach(ex_filepath IN LISTS EXAMPLES_LIST)
    wp_setup_single_file_example(
        ${ex_filepath}
        TARGET_DEPENDENCIES
        ex_common
    )
endforeach()

