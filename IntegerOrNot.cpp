#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == (int)num) {
        cout << "It is an Integer";
    }
    else {
        cout << "It is not an Integer";
    }

    return 0;
}