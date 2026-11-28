#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello";

    cout << "Original: " << s << endl;

    s.push_back('!');

    cout << "After push: " << s << endl;

    s.pop_back();

    cout << "After pop: " << s << endl;

    return 0;
}