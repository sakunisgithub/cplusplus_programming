#include<iostream>

int find_greatest(int, int, int, int);

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int answer = find_greatest(a, b, c, d);

    cout << answer;
    
    return 0;
}

int find_greatest(int a, int b, int c, int d)
{
    int x, y;
    (a >= b) ? (x = a) : (x = b);
    (c >= d) ? (y = c) : (y = d);

    int z;
    (x >= y) ? (z = x) : (z = y);

    return z;
}
