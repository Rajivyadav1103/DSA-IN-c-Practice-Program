#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Neither Prime nor Composite";
    }
    else
    {
        while (i <= num)
        {
            if (num % i == 0)
            {
                count++;
            }

            i++;
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