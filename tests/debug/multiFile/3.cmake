FetchContent_Declare(
  		ph_concepts
  		GIT_REPOSITORY https://github.com/phiwen96/ph_concepts.git
  		GIT_TAG        v0.0.0)

	FetchContent_GetProperties (ph_concepts)
	
	if (NOT ph_concepts_POPULATED)
  		FetchContent_Populate (ph_concepts)
  		add_subdirectory (${ph_concepts_SOURCE_DIR} ${ph_concepts_BINARY_DIR})
	endif ()