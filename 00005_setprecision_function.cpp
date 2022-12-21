#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double number = 1.123456;

    cout << setprecision(2) << number << "\n";
    cout << setprecision(3) << number << "\n";
    cout << setprecision(4) << number << "\n";
    cout << setprecision(5) << number << "\n";

    return 0;
}