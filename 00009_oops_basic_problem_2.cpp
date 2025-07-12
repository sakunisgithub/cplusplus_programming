// Create a `Rectangle` class with attributes `length` and `width`. Add a method `area()` that returns the area of the rectangle, and a method `perimeter()` that returns its perimeter.

#include<iostream>

using namespace std;

class Rectangle {
public:
    float length;
    float width;

    void area()
    {
        cout << "Area of your rectangle is " << length * width << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of your rectangle is " << 2 * (length + width) << endl;
    }
};

int main()
{
    Rectangle rect;

    rect.length = 4;
    rect.width = 5;

    rect.area();

    rect.perimeter();

    return 0;
}