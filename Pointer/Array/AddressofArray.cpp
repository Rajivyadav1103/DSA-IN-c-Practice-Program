#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Address of array: " << arr << endl;
    cout << "Address of first element: " << &arr[0] << endl;
    cout << "Address of second element: " << &arr[1] << endl;
    cout << "Address of third element: " << &arr[2] << endl;

    return 0;
}