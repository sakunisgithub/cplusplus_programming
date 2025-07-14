// Create a `Student` class with attributes `name`, `roll_no`, and `marks`. Write a method `display()` to show student details and a method `is_pass()` that returns True if marks are 40 or above.

#include<iostream>

using namespace std;

class Student {
public:
    string name;
    int roll_no;
    int marks;

    void display()
    {
        cout << name << ", roll number " << roll_no << " has scored " << marks << endl;
    }

    void is_pass()
    {
        if (marks >= 40)
        {
            cout << name << " has passed." << endl;
        }
        else
        {
            cout << name << " has failed" << endl;
        }
    }
};
int main()
{
    Student s1;

    s1.name = "Ananda";
    s1.roll_no = 1;
    s1.marks = 7;

    s1.display();

    s1.is_pass();

    Student s2;

    s2.name = "Shweta";
    s2.roll_no = 2;
    s2.marks = 45;

    s2.display();

    s2.is_pass();

    return 0;
}