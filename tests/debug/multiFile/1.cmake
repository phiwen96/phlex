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
