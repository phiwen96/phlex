cmake_minimum_required (VERSION 3.19.4)

file (TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if (EXISTS "${LOC_PATH}")
    message (FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif ()

get_filename_component (self ${CMAKE_CURRENT_SOURCE_DIR} NAME)

project (
	${self}
	VERSION 1.0
	DESCRIPTION "Very nice project"
	LANGUAGES CXX
)	

unset (self)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
	enable_testing()
	set (CMAKE_CXX_STANDARD 20)
	set (CMAKE_CXX_STANDARD_REQUIRED ON)
	set (CMAKE_CXX_EXTENSIONS ON)
	set_property (GLOBAL PROPERTY USE_FOLDERS ON)
endif()

 
if (NOT TARGET ph_cmake)
	include (FetchContent)
	FetchContent_Declare(
  		ph_cmake
  		GIT_REPOSITORY https://github.com/phiwen96/ph_cmake.git
  		GIT_TAG        v0.0.0)

	FetchContent_GetProperties (ph_cmake)
	
	if (NOT ph_cmake_POPULATED)
  		FetchContent_Populate (ph_cmake)
  		add_subdirectory (${ph_cmake_SOURCE_DIR} ${ph_cmake_BINARY_DIR})
	endif ()
endif ()






add_subdirectory (src)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
include(CMakePrintHelpers)
	cmake_print_variables (lib_${CMAKE_PROJECT_NAME} CMAKE_VERSION)
	# cmake_print_properties(TARGETS ${CMAKE_PROJECT_NAME} PROPERTIES TYPE ALIASED_TARGET)
endif()


if ((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR ${CMAKE_PROJECT_NAME}_BUILD_TESTING) AND BUILD_TESTING)
	add_subdirectory (tests)
endif()

add_subdirectory (apps)