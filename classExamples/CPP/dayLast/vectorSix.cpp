#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Create a vector and initialize it
    vector<int> numbers = {5, 3, 8, 1, 2};

    // Sort the vector
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Find a number in the vector
    int searchNum = 3;
    auto it = find(numbers.begin(), numbers.end(), searchNum);
    if (it != numbers.end()) {
        cout << searchNum << " found in the vector." << endl;
    } else {
        cout << searchNum << " not found in the vector." << endl;
    }

    return 0;
}

