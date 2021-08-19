FetchContent_Declare(
  		ph_file
  		GIT_REPOSITORY https://github.com/phiwen96/ph_file.git
  		GIT_TAG        v0_0_0)

	FetchContent_GetProperties (ph_file)
	
	if (NOT ph_file_POPULATED)
  		FetchContent_Populate (ph_file)
  		add_subdirectory (${ph_file_SOURCE_DIR} ${ph_file_BINARY_DIR})
	endif ()