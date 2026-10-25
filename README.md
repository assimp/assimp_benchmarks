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
### Version 6.0.1
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors
| Model      | Time [ns] | CPU [ns]  |
|------------|-----------|-----------|
| Sponza Obj | 118868 ns | 119629 ns |

### Version 6.0.5
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors
| Model      | Time [ns] | CPU [ns]  |
|------------|-----------|-----------|
| Sponza Obj | 118868 ns | 119629 ns |

### Current master
Processor	AMD Ryzen 7 7700 8-Core Processor, 3801 MHz, 8 Cores, 16 logical processors
| Model      | Time [ns] | CPU       |
|------------|-----------|-----------|
| Sponza Obj | NA ns     | 119629 ns |


