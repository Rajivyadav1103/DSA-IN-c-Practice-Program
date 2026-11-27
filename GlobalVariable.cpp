//   1. Example of Global Variable
#include <iostream>
using namespace std;

int x = 100;  // Global variable

int main()
{
    cout << x << endl;

    return 0;
}




    //   2. Global Variable Used in Multiple Functions
    #include <iostream>
using namespace std;

int num = 50;  // Global variable

void display()
{
    cout << "Inside function: " << num << endl;
}

int main()
{
    cout << "Inside main: " << num << endl;

    display();

    return 0;
}




// 3. Changing a Global Variable

#include <iostream>
using namespace std;

int x = 10;

int main()
{
    cout << "Before: " << x << endl;

    x = 50;

    cout << "After: " << x;

    return 0;
}
