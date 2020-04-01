file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( dllinject ${SRC} ${HDR} )
#
target_include_directories( dllinject PUBLIC ${CMAKE_CURRENT_LIST_DIR} )
target_link_libraries( dllinject pixelengine )