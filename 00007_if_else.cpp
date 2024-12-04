#include<iostream>

using namespace std;

int main()
{
    cout << "Your age is " ;

    int age;

    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult" <<"\n";
    }
    else
    {
        cout << "You are not an adult" <<"\n";
    }
    
    return 0;
}