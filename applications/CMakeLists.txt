

add_executable (app app.cpp)
target_link_libraries (app PRIVATE lib)
set_target_properties (app PROPERTIES
  CXX_STANDARD 20
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF
)

# set_target_properties(app PROPERTIES FOLDER "pp")


