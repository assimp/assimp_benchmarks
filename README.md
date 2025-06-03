# assimp_benchmarks
The Asset-Importer-Lib benchmark repository.

## Build instructions
```
> git clone --recursive https://github.com/assimp/assimp_benchmarks.git
> cd assimp_benchmarks
> cmake .\CMakeLists.txt -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON
> cmake --build .
> cd bin\debug
> cp -r ..\..\3rdparty\sponza\*
> .\assimp_benchmarks.exe
```
