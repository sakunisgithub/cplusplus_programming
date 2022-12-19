#include <cstdio>
#include<iostream>

int main()
{
    int a;
    long b;
    char ch;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &ch, &d, &e);

    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", ch);
    printf("%3f\n", d);
    printf("%9lf\n", e);
    
    return 0;
}
