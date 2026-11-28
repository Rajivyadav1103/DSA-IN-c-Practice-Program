#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string s = "Hello World";

    // Display string
    cout << "String: " << s << endl;

    // String length
    cout << "Length: " << s.length() << endl;

    // String size
    cout << "Size: " << s.size() << endl;

    // Access characters
    cout << "First character: " << s[0] << endl;
    cout << "Last character: " << s.back() << endl;

    // Access using at()
    cout << "Character at index 1: " << s.at(1) << endl;

    // Append string
    s.append(" C++");
    cout << "Append: " << s << endl;

    // Add character
    s.push_back('!');
    cout << "Push back: " << s << endl;

    // Remove last character
    s.pop_back();
    cout << "Pop back: " << s << endl;

    // Insert string
    s.insert(5, " Programming");
    cout << "Insert: " << s << endl;

    // Erase characters
    s.erase(5, 12);
    cout << "Erase: " << s << endl;

    // Find substring
    cout << "Find World: " << s.find("World") << endl;

    // Substring
    cout << "Substring: " << s.substr(0, 5) << endl;

    // Reverse string
    reverse(s.begin(), s.end());
    cout << "Reverse: " << s << endl;

    // Clear string
    s.clear();
    cout << "After clear: " << s.size() << endl;

    return 0;
}