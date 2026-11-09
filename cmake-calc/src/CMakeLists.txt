add_executable(cmake-calc main.c)
add_library(add add.c)
add_library(sub sub.c)
add_library(div div.c)
add_library(mult mult.c)

target_link_libraries(cmake-calc PRIVATE add sub div mult)
target_compile_options(cmake-calc PRIVATE -Wall -Wextra)
