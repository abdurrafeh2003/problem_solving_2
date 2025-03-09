#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Initialize the vector with values {10, 20, 30, 40, 50}
    vector<int> vec = {10, 20, 30, 40, 50};
    
    // 1. Insert 10 at the beginning
    vec.insert(vec.begin(), 10);

    // 2. Remove the element at index 2
    vec.erase(vec.begin() + 2);

    // 3. Replace the element at index 2 with 25
    vec[2] = 25;

    // 4. Sort the vector in ascending order
    //sort(vec.begin(), vec.end());

    // Display all elements in the vector
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
