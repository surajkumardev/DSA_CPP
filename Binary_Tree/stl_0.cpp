#include <iostream>
#include <vector>
#include <algorithm> // For all the algorithm functions
#include <random>    // For shuffle with C++11 random engine

int main() {
    std::vector<int> v = {5, 3, 1, 4, 2};

    // 1. Sorting
    std::sort(v.begin(), v.end());
    std::cout << "Sorted: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    // 2. Searching - binary_search (works only on sorted container)
    bool found = std::binary_search(v.begin(), v.end(), 3);
    std::cout << "Is 3 found? " << (found ? "Yes" : "No") << "\n";

    // 3. Finding elements - find()
    auto it = std::find(v.begin(), v.end(), 4);
    if (it != v.end()) {
        std::cout << "Found element 4 at index: " << (it - v.begin()) << "\n";
    } else {
        std::cout << "Element 4 not found\n";
    }

    // 4. Reversing elements - reverse()
    std::reverse(v.begin(), v.end());
    std::cout << "Reversed: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    // 5. Shuffling elements - shuffle() (C++11 and later)
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(v.begin(), v.end(), g);
    std::cout << "Shuffled: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    // 6. Min/max operations
    int minimum = *std::min_element(v.begin(), v.end());
    int maximum = *std::max_element(v.begin(), v.end());
    int minimum_val = std::min(10, 20);
    int maximum_val = std::max(10, 20);

    std::cout << "Min element in vector: " << minimum << "\n";
    std::cout << "Max element in vector: " << maximum << "\n";
    std::cout << "Min between 10 and 20: " << minimum_val << "\n";
    std::cout << "Max between 10 and 20: " << maximum_val << "\n";

    return 0;
}
