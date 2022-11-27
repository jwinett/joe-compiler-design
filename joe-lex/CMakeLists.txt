# CMakeList.txt : CMake project for joe-lex, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (joe-lex "joe-lex.cpp" "joe-lex.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET joe-lex PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
