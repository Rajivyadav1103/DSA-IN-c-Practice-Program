#include <iostream>
#include <vector>
using namespace std;

// Pass by value
void display(vector<int> v) {
    cout << "Pass by value: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

// Pass by reference
void update(vector<int> &v) {
    v.push_back(60);
    cout << "Pass by reference: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

// Pass by const reference
void show(const vector<int> &v) {
    cout << "Const reference: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

// Find maximum
int findMax(const vector<int> &v) {
    int max = v[0];

    for (int x : v) {
        if (x > max) {
            max = x;
        }
    }

    return max;
}

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    display(v);

    update(v);

    show(v);

    cout << "Maximum element: " << findMax(v) << endl;

    cout << "Original vector: ";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}