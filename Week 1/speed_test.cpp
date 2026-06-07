#include <iostream>
#include <vector>
#include <chrono>

int main() {
    int size = 100000000;
    std::vector<int> a(size), b(size), c(size);

    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < size; ++i) {
        c[i] = a[i] + b[i];
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> diff = end - start;
    std::cout << "C++ loop took: " << diff.count() << " seconds" << std::endl;
    return 0;
}







