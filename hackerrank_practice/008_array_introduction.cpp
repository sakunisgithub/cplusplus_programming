#include<iostream>

void reverse_array(int *, int);

void swap(int *, int *);

using namespace std;

int main()
{
    int array_length;

    cin >> array_length;

    int array[array_length];

    for(int i = 0; i < array_length; i++)
    {
        cin >> array[i];
    }

    reverse_array(array, array_length);

    for(int i = 0; i < array_length; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void reverse_array(int * my_array, int length)
{
    for(int i = 0; i < length/2; i++)
    {
        swap((my_array + i), (my_array + length - i - 1));
    }
}

void swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
