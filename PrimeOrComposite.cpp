#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Neither Prime nor Composite";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << "Prime Number";
        }
        else
        {
            cout << "Composite Number";
        }
    }

    return 0;
}