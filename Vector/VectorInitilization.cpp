#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;
    vector<int> v2 = {10, 20, 30};
    vector<int> v3(5, 100);
    vector<int> v4(5);

    for (int x : v2) {
        cout << x << " ";
    }

    return 0;
}