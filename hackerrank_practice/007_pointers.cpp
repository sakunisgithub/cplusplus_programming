#include<iostream>

void update(int *, int *);

using namespace std;

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    update(&a, &b);

    return 0;
}

void update(int * x, int * y)
{
    cout <<  (*x) + (*y) << "\n";

    int diff;
    ((*x) >= (*y)) ? (diff = (*x) - (*y)) : (diff = (*y) - (*x));

    cout << diff;

}
