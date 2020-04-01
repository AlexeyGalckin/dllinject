file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( inject ${SRC} ${HDR} )
#
#target_link_libraries( inject mvi )