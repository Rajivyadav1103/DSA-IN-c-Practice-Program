// 1. Example of Local Variable
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 100;  // Local variable

//     cout << x;

//     return 0;
// }

    // 2. Local Variable Inside a Function
//     #include <iostream>
// using namespace std;

// void display()
// {
//     int num = 50;  // Local variable

//     cout << num;
// }

// int main()
// {
//     display();

//     return 0;
// }



        // 3. Accessing Local Variable Outside Its Function

        #include <iostream>
using namespace std;

void display()
{
    int x = 10;
}

int main()
{
    display();

    cout << x;    // Error: x is not accessible here

    return 0;
}