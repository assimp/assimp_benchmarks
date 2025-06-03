
#

project ("assimp_benchmarks")

set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin )

set( assimp_SOURCE_DIR 3rdparty/assimp)

include_directories(
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/3rdparty/assimp/include
    ${PROJECT_SOURCE_DIR}/3rdparty/benchmark/include
)

add_subdirectory(${assimp_SOURCE_DIR})
add_subdirectory(3rdparty/benchmark)
add_executable (assimp_benchmarks src/main.cpp)
set_property(TARGET assimp_benchmarks PROPERTY CXX_STANDARD 17)
target_include_directories(assimp_benchmarks PRIVATE ${assimp_SOURCE_DIR}/include)
target_link_libraries(assimp_benchmarks PRIVATE assimp::assimp benchmark) 
