// Create a `Person` class with attributes `name` and `age`. Write a method `introduce()` that prints "Hi, I'm {name} and I'm {age} years old." Create a few objects and call the method.

#include<iostream>
#include<string>

using namespace std;

class Person {
public:
    string name;
    int age;

    void introduce()
    {
        cout << "Hi ! I'm " << name << " and I'am " << age << "years old." << endl;
    }
};

int main()
{
    Person p;

    p.name = "Ananda";
    p.age = 22;

    p.introduce();

    return 0;
}