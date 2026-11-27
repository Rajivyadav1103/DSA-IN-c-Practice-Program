#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}

    //   2. Swap Without Third Variable


#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}

//  3. Swap Using Inbuilt Function
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10, b = 20;

    swap(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}