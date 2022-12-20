#include <iostream>

using namespace std;

int main()
{
    unsigned long int integer;
    cin >> integer;

    if (integer >= 1 && integer <= 9)
    {
        if (integer == 1)
        {
            cout << "one";
        }
        else if (integer == 2)
        {
            cout << "two";
        }
        else if (integer == 3)
        {
            cout << "three";
        }
        else if (integer == 4)
        {
            cout << "four";
        }
        else if (integer == 5)
        {
            cout << "five";
        }
        else if (integer == 6)
        {
            cout << "six";
        }
        else if (integer == 7)
        {
            cout << "seven";
        }
        else if (integer == 8)
        {
            cout << "eight";
        }
        else
        {
            cout << "nine";
        }
    }
    else if (integer > 9)
    {
        cout << "Greater than 9";
    }
    
    return 0;
}

