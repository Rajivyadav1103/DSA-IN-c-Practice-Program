#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "Hello";
    string s2 = "World";

    // Equal
    cout << (s1 == s2) << endl;

    // Not equal
    cout << (s1 != s2) << endl;

    // Greater than
    cout << (s1 > s2) << endl;

    // Less than
    cout << (s1 < s2) << endl;

    // Compare function
    cout << s1.compare(s2) << endl;

    return 0;
}