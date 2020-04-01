file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( dllapp ${SRC} ${HDR} )
#
add_dependencies( dllapp dllinject )
target_link_libraries( dllapp dllinject )