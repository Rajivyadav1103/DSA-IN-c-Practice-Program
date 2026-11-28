#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // Display vector
    cout << "Vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    // Size and capacity
    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();

    // Access elements
    cout << "\nFirst element: " << v.front();
    cout << "\nLast element: " << v.back();
    cout << "\nElement at index 2: " << v.at(2);

    // Push back
    v.push_back(60);

    // Pop back
    v.pop_back();

    // Insert element
    v.insert(v.begin() + 1, 15);

    // Erase element
    v.erase(v.begin() + 1);

    // Check empty
    cout << "\nIs Empty: " << v.empty();

    // Resize
    v.resize(7);

    // Sort ascending
    sort(v.begin(), v.end());

    // Reverse
    reverse(v.begin(), v.end());

    // Display updated vector
    cout << "\nUpdated Vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    // Clear vector
    v.clear();

    cout << "\nSize after clear: " << v.size();

    return 0;
}