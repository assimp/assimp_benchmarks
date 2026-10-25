# assimp_benchmarks
The Asset-Importer-Lib benchmark repository.

## Introduction
This repository provides benchmarks for the Asset-Importer-Lib.

## Build instructions (Linux)
``` bash
git clone --recursive https://github.com/assimp/assimp_benchmarks.git
cd assimp_benchmarks
cmake ./CMakeLists.txt -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON
cmake --build .
cd bin
cp -r ../3rdparty/sponza/*
./assimp_benchmarks.exe
```

## Build instructions (Windows)
``` powershell
git clone --recursive https://github.com/assimp/assimp_benchmarks.git
cd assimp_benchmarks
cmake .\CMakeLists.txt -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON
cmake --build .
cd bin\debug
cp -r ..\..\3rdparty\sponza\*
.\assimp_benchmarks.exe
```

## Results


### Version 6.0.2
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors

-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
spatialSort                    6098 ns         6138 ns       112000
findPositions                  6176 ns         6138 ns       112000
calculateVectorNormalize      0.962 ns        0.963 ns    746666667
importAsset               250973400 ns    244791667 ns            3

### Version 6.0.5
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
spatialSort                    6068 ns         5999 ns       112000
findPositions                  6113 ns         6138 ns       112000
calculateVectorNormalize      0.970 ns        0.963 ns    746666667
importAsset               224047200 ns    223958333 ns            3

### Current master
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
spatialSort                    6140 ns         6138 ns       112000
findPositions                  6156 ns         6138 ns       112000
calculateVectorNormalize      0.971 ns        0.984 ns    746666667
importAsset               186576900 ns    183593750 ns            4
