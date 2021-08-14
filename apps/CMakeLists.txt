

add_executable (app app.cpp)
target_link_libraries (app PRIVATE lib)

set_target_properties(app PROPERTIES FOLDER "app")