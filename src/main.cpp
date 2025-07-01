#include <benchmark/benchmark.h>
#include <assimp/Importer.hpp>
#include <assimp/vector3.h>
#include <assimp/SpatialSort.h>

using namespace Assimp;

static void preparePositions(std::vector<aiVector3D> &positions, size_t numPositions) {
    positions.reserve(numPositions);
    for (size_t i = 0; i < numPositions; ++i) {
        positions.emplace_back(static_cast<float>(i), static_cast<float>(i + 1), static_cast<float>(i + 2));
    }
}

void spatialSort(benchmark::State& state) {
    for (auto _ : state) {
        // Create a vector of aiVector3D objects
        std::vector<aiVector3D> positions;
        preparePositions(positions, 1000); // Prepare 1000 positions
        SpatialSort spatialSort(positions.data(), positions.size(), 0);
        benchmark::DoNotOptimize(positions); // Prevent optimization
        spatialSort.Finalize(); // Finalize the spatial sort
        benchmark::DoNotOptimize(spatialSort); // Prevent optimization
    }
}

void findPositions(benchmark::State& state) {
    for (auto _ : state) {
        // Create a vector of aiVector3D objects
        std::vector<aiVector3D> positions;
        preparePositions(positions, 1000); // Prepare 1000 positions
        SpatialSort spatialSort(positions.data(), positions.size(), 0);
        spatialSort.Finalize(); // Finalize the spatial sort

        aiVector3D searchPosition(500.0f, 501.0f, 502.0f); // Position to search for
        std::vector<unsigned int> results;
        spatialSort.FindPositions(searchPosition, 10.0f, results); // Find positions within a radius
        benchmark::DoNotOptimize(results); // Prevent optimization
    }
}

void calculateVectorNormalize(benchmark::State& state) {
    for (auto _ : state) {
        float x = 1.0f, y = 2.0f, z = 3.0f;
        aiVector3D vec(x, y, z); // Create a vector
        vec.Normalize(); // Normalize the vector
        benchmark::DoNotOptimize(vec); // Prevent optimization
    }
}

void importAsset(benchmark::State& state) {
    for (auto _ : state) {
        Importer importer;
        importer.ReadFile("./sponza.obj", 0);
    }
}

BENCHMARK(spatialSort);
BENCHMARK(findPositions);
BENCHMARK(calculateVectorNormalize);
BENCHMARK(importAsset);

BENCHMARK_MAIN();
