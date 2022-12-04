#include<iostream>

using namespace std;

int c = 15;

int main()
{
    int c = 10;
    cout << "The local value of c is " << c << "\n"; // this will print the local value of c i.e. 10

    cout << "The global value of c is " << ::c << "\n"; // this will print the global value of c i.e. 15
    
    /* :: is called the scope resolution operator in c++ */

    return 0;
}
