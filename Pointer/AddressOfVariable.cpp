// 1. Address of a Variable
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;

//     cout << "Value of a: " << a << endl;
//     cout << "Address of a: " << &a;

//     return 0;
// }

//    2. Using Pointer to Store Address
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer value: " << ptr << endl;
    cout << "Value using pointer: " << *ptr;

    return 0;
}


    // 4. Changing Value Using Pointer
    #include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;

    *ptr = 50;

    cout << "Value of a: " << a;

    return 0;
}