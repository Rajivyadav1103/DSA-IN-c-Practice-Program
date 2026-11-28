#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "Rajiv";
    string s2 = "Yadav";

    // Using + operator
    string s3 = s1 + " " + s2;
    cout << "Using + : " << s3 << endl;

    // Using append()
    string s4 = s1;
    s4.append(" ");
    s4.append(s2);
    cout << "Using append: " << s4 << endl;

    // Using += operator
    string s5 = s1;
    s5 += " ";
    s5 += s2;
    cout << "Using += : " << s5 << endl;

    return 0;
}