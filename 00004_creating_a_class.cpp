#include<iostream>

using namespace std;

class employee
{
    private:
        int salary, bank_balance;

    public:
        int completed_assignments, credit_score;
        void setdata(int salary, int bank_balance);
        void getdata()
        {
            cout<<"The salary of the employee is "<<salary<<"\n";
            cout<<"The bank_balance of the employee is "<<bank_balance<<"\n";
            cout<<"Number of completed assignments by the employee is "<<completed_assignments<<"\n";
            cout<<"The credit score of the employee is "<<credit_score<<"\n";
        } 
};

void employee :: setdata(int a, int b)
{
    salary = a;
    bank_balance = b;
}

int main()
{
    employee madhav;

    madhav.completed_assignments = 5;
    madhav.credit_score = 65;
    madhav.setdata(20000, 100000);
    madhav.getdata();

    return 0;
}
