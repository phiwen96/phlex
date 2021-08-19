 
# if (NOT TARGET ph_cmake)
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
# endif ()


# if (NOT TARGET ph_file)
	# include (FetchContent)
	FetchContent_Declare(
  		ph_file
  		GIT_REPOSITORY https://github.com/phiwen96/ph_file.git
  		GIT_TAG        v0_0_0)

	FetchContent_GetProperties (ph_file)
	
	if (NOT ph_file_POPULATED)
  		FetchContent_Populate (ph_file)
  		add_subdirectory (${ph_file_SOURCE_DIR} ${ph_file_BINARY_DIR})
	endif ()
# endif ()

# if (NOT TARGET ph_concepts)
	# include (FetchContent)
	FetchContent_Declare(
  		ph_concepts
  		GIT_REPOSITORY https://github.com/phiwen96/ph_concepts.git
  		GIT_TAG        v0.0.0)

	FetchContent_GetProperties (ph_concepts)
	
	if (NOT ph_concepts_POPULATED)
  		FetchContent_Populate (ph_concepts)
  		add_subdirectory (${ph_concepts_SOURCE_DIR} ${ph_concepts_BINARY_DIR})
	endif ()