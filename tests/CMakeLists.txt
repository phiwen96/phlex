# add_subdirectory (tests)

# set (test_name "test_${CMAKE_PROJECT_NAME}")
# $<TARGET_FILE:app2>

# add_test (NAME test_0 COMMAND app)
# add_test (NAME test_1 COMMAND app)

# add_test (NAME test_1 COMMAND app $<TARGET_FILE:app>)


# set (TEST_DIRS )

FILE (GLOB children LIST_DIRECTORIES TRUE ${CMAKE_CURRENT_LIST_DIR}/*)

foreach (file IN LISTS children)

	if (IS_DIRECTORY ${file})
		set (TEST_DIRS ${TEST_DIRS} \"${file}\",)
		add_test (NAME test_${file} CONFIGURATIONS Debug Release WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR} COMMAND $<TARGET_FILE:app> ${file})
		set_tests_properties (test_${file} PROPERTIES DISABLED YES)
		target_compile_definitions (phlex PUBLIC $<$<CONFIG:Debug>:TEST_DIR="${file}">)
	endif ()
	
endforeach ()

# message(${TEST_DIRS})
# target_compile_definitions (phlex PUBLIC $<$<CONFIG:Debug>:TEST_DIR=>)

# target_compile_definitions (phlex PUBLIC $<$<CONFIG:Debug>:TEST_DIRS="${TEST_DIRS}">)

# message("bahs")



# set_tests_properties (test_0 PROPERTIES TIMEOUT 10)
# set_tests_properties(test_1 PROPERTIES TIMEOUT 10)

