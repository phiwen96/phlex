add_subdirectory (tests)

set (test_name "test_${CMAKE_PROJECT_NAME}")
$<TARGET_FILE:app2>

add_test (NAME noArgs COMMAND ${test_name})

add_test(NAME withArgs COMMAND ${test_name} $<TARGET_FILE:test_name>)

