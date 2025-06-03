#include <benchmark/benchmark.h>
#include <assimp/Importer.hpp>

using namespace Assimp;

void importAsset(benchmark::State& state) {
    for (auto _ : state) {
        Importer importer;
        importer.ReadFile("./sponza.obj", 0);
    }
}

BENCHMARK(importAsset);

BENCHMARK_MAIN();
