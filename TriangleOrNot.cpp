#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "It is a valid triangle";
    }
    else {
        cout << "It is not a valid triangle";
    }

    return 0;
}