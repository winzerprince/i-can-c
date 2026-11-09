add_executable(cmake-calc main.c)
add_library(add add.c)
add_library(sub sub.c)
add_library(div div.c)
add_library(mult mult.c)

target_include_directories(add PUBLIC
$<BUILD_INTERFACE: ${PROJECT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>
)

target_include_directories(sub PUBLIC
$<BUILD_INTERFACE: ${PROJECT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>
)

target_include_directories(div PUBLIC
$<BUILD_INTERFACE: ${PROJECT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>
)


target_include_directories(mult PUBLIC
$<BUILD_INTERFACE: ${PROJECT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>
)

target_link_libraries(cmake-calc PRIVATE add sub div mult)
target_compile_options(cmake-calc PRIVATE -Wall -Wextra)
target_compile_features(cmake-calc PUBLIC c_std_11)
