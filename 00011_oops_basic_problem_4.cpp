// Create a `Car` class with attributes `brand` and `speed`. Add a method `accelerate()` that increases speed by 10, and `brake()` that decreases speed by 10 (but not below 0).

#include<iostream>

using namespace std;

class Car {
public:
    string brand;
    float speed;

    void accelerate()
    {
        speed += 10;
        cout << "Current Speed = " << speed << endl;
    }

    void brake()
    {
       if (speed - 10 >= 0)
       {
        speed -= 10;
       } 
       else
       {
        speed = 0;
       }

       cout << "Current speed = " << speed << endl;
    }
};
int main()
{
    Car car1;

    car1.brand = "Kuttus";
    car1.speed = 0;

    car1.accelerate();
    car1.accelerate();

    car1.brake();
    car1.brake();
    car1.brake();

    return 0;
}