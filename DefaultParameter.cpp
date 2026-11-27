#include <iostream>
using namespace std;

void greet(string name = "Rajiv")
{
    cout << "Hello " << name;
}

int main()
{
    greet();

    return 0;
}
