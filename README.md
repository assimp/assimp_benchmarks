# assimp_benchmarks
The Asset-Importer-Lib benchmark repository.

## Introduction
This repository provides benchmarks for the Asset-Importer-Lib.

## Build instructions (Linux)
```
> git clone --recursive https://github.com/assimp/assimp_benchmarks.git
> cd assimp_benchmarks
> cmake ./CMakeLists.txt -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON
> cmake --build .
> cd bin
> cp -r ../3rdparty/sponza/*
> ./assimp_benchmarks.exe
```

## Build instructions (Windows)
```
> git clone --recursive https://github.com/assimp/assimp_benchmarks.git
> cd assimp_benchmarks
> cmake .\CMakeLists.txt -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON
> cmake --build .
> cd bin\debug
> cp -r ..\..\3rdparty\sponza\*
> .\assimp_benchmarks.exe
```
