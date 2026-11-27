#include <iostream>
using namespace std;

int main() {
    float p, t, r, si;

    cout << "Enter principal amount: ";
    cin >> p;

    cout << "Enter time in years: ";
    cin >> t;

    cout << "Enter rate of interest: ";
    cin >> r;

    si = (p * t * r) / 100;

    cout << "Simple Interest = " << si << endl;

    return 0;
}