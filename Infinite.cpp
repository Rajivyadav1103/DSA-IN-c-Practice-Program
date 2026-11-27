
// ------ 1. Infinite For Loop-------
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (;;)
//     {
//         cout << "Hello World" << endl;
//     }

//     return 0;
// }

// ------2. Infinite While Loop------
// #include <iostream>
// using namespace std;

// int main()
// {
//     while (true)
//     {
//         cout << "Hello World" << endl;
//     }

//     return 0;
// }

// ======3. Infinite Do-While Loop=====
// #include <iostream>
// using namespace std;

// int main()
// {
//     do
//     {
//         cout << "Hello World" << endl;
//     }
//     while (true);

//     return 0;
// }

// -----4. Infinite Loop Using a Condition--
#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 5)
    {
        cout << i << endl;
        // Missing i++;
    }

    return 0;
}