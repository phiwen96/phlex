file(GLOB HEADER_LIST CONFIGURE_DEPENDS "../include/phlex/*.hpp")

foreach(file ${HEADER_LIST})
    source_group (TREE "${CMAKE_CURRENT_LIST_DIR}/../include/phlex"
        PREFIX "include"               
        FILES  ${file}
    )
endforeach()


file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/*.cpp")

foreach(file ${SOURCE_LIST})
    source_group (TREE ${CMAKE_CURRENT_LIST_DIR}
        PREFIX "src"               
        FILES  ${file}
    )
endforeach()



add_library (phlex
	${SOURCE_LIST}  ${HEADER_LIST} 
	# ALIAS phlex::phlex
)

set_target_properties (
	phlex 

	PROPERTIES
  		CXX_STANDARD 20
  		CXX_STANDARD_REQUIRED ON
  		CXX_EXTENSIONS OFF

	FOLDER
		""
)
# Make override a feature requirement only if available
# target_compile_features (phlex 
# 	PUBLIC
#   		$<$<COMPILE_FEATURES:cxx_override>:cxx_override>
# )
# Define the foo_OVERRIDE symbol so it provides the
# override keyword if available or empty otherwise
target_compile_definitions (phlex 
	# PUBLIC
  	# 	$<$<COMPILE_FEATURES:cxx_override>:-Dphlex_OVERRIDE=override>
  	# 	$<$<NOT:$<COMPILE_FEATURES:cxx_override>>:-Dphlex_OVERRIDE>

	PRIVATE 
		"$<$<CONFIG:DEBUG>:DEBUG> $<$<CONFIG:RELEASE>:RELEASE>"
)


# target_compile_definitions (lib PRIVATE "$<$<CONFIG:DEBUG>:DEBUG> $<$<CONFIG:RELEASE>:RELEASE>")


# target_sources (ph_concepts PRIVATE in/platform.hpp)
set (self phlex)

set_target_properties (phlex PROPERTIES CXX_STANDARD 20)
target_compile_features (phlex PUBLIC cxx_std_20)

ph_precompile (TARGET phlex PRIVATE PCH ${std_pch})

# add_library (phlex ALIAS phlex::phlex)
# target_link_libraries (lib PRIVATE    ${Vulkan_LIBRARIES} glfw)
target_link_libraries (phlex PRIVATE ph_file)

target_include_directories (phlex PUBLIC ${CMAKE_PROJECT_SOURCE_DIR}/include ph_file)
# target_include_directories (ph_concepts PRIVATE ${Boost_INCLUDE_DIRS})

target_compile_features (phlex PUBLIC cxx_std_20)

# target_compile_options(ph_concepts PUBLIC "-ast-dump  -fsyntax-only")


target_include_directories(phlex PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include/phlex>
    $<INSTALL_INTERFACE:include/phlex>
)

target_include_directories(phlex PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include>
    $<INSTALL_INTERFACE:include>
)

if (PROJECT_NAME STREQUAL PROJECT_NAME)
    # set_target_properties (lib PROPERTIES FOLDER "lib/")
else ()
    set_target_properties (phlex PROPERTIES FOLDER "dependencies/phlex")
endif ()



# IDE()