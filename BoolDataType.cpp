#include <iostream>
using namespace std;

int main() {
    bool isPassed;

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    isPassed = (marks >= 40);

    if (isPassed) {
        cout << "You are Passed";
    }
    else {
        cout << "You are Failed";
    }

    return 0;
}