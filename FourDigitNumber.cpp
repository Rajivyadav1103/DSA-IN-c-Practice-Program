#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        cout << "It is a 4-digit number";
    }
    else if (num <= -1000 && num >= -9999) {
        cout << "It is a 4-digit number";
    }
    else {
        cout << "It is not a 4-digit number";
    }

    return 0;
}