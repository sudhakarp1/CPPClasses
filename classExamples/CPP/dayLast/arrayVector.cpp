#include <iostream>
#include <vector>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

class Array {
    const int size;
    std::vector<int> arr; // Use std::vector instead of raw pointer

public:
    // Constructor delegation
    Array() : Array(5) {} // Default size of 5

    Array(int sz) : size(sz), arr(sz) { // Initialize vector with size
        for (int cnt = 0; cnt < size; ++cnt) {
            arr[cnt] = rand() % 100; // Fill with random numbers
        }
    }

    void sort() {
        int i, j, min_idx;
        for (i = 0; i < size - 1; i++) {
            min_idx = i;
            for (j = i + 1; j < size; j++) {
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            }
            if (min_idx != i)
                std::swap(arr[min_idx], arr[i]);
        }
    }

    void disp() const {
        std::cout << "Array: ";
        for (const auto& value : arr)
            std::cout << value << "  ";
        std::cout << "\n**************************************\n";
    }
};

int main() {
    srand(static_cast<unsigned int>(time(NULL))); // Seed the random number generator

    Array one;
    one.disp();
    one.sort();
    one.disp();

    Array two(10); // Changed to use parentheses for clarity
    two.disp();
    two.sort();
    two.disp();

    return 0;
}

