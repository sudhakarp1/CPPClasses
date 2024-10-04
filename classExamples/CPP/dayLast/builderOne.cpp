#include <iostream>
#include <vector>
#include <algorithm>

class Array {
private:
    std::vector<int> data;
    bool isSorted;

    // Private constructor, used by the builder
    Array(std::vector<int> data, bool sorted) : data(std::move(data)), isSorted(sorted) {
        if (isSorted) {
            std::sort(this->data.begin(), this->data.end());
        }
    }

public:
    void print() const {
        for (const auto& value : data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    class Builder {
    private:
        std::vector<int> data;
        bool isSorted = false;

    public:
        Builder& withSize(size_t size) {
            data.resize(size);
            return *this;
        }

        Builder& withValue(int value) {
            std::fill(data.begin(), data.end(), value);
            return *this;
        }

        Builder& sort() {
            isSorted = true;
            return *this;
        }

        Array build() {
            return Array(data, isSorted);
        }
    };
};




int main() {
    // Create an array of size 5, filled with 10, and sorted
    Array arr1 = Array::Builder()
                    .withSize(5)
                    .withValue(10)
                    .sort()
                    .build();
    arr1.print(); // Output: 10 10 10 10 10 

    // Create an unsorted array of size 3 filled with 7
    Array arr2 = Array::Builder()
                    .withSize(3)
                    .withValue(7)
                    .build();
    arr2.print(); // Output: 7 7 7 

    // Create an empty array
    Array arr3 = Array::Builder()
                    .withSize(0)
                    .build();
    arr3.print(); // Output: (no output)

    return 0;
}

