

add_executable (app_${CMAKE_PROJECT_NAME} app_${CMAKE_PROJECT_NAME}.cpp)
target_link_libraries (app_${CMAKE_PROJECT_NAME} PRIVATE lib_${CMAKE_PROJECT_NAME})