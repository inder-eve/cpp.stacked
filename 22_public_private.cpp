#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 123456;
        cout << " enter the id of employee " << endl;
        cin >> Id;
    }

    void getId(void)
    {
        cout << "the id of this employee is" << Id << endl;
    }
};

int main()
{

    // Employee PIYUSH, ISHAAN, HARSHIT, INDER;
    // PIYUSH.setId();
    // PIYUSH.getId();

    Employee medics[4];
    for (int i = 0; i < 4; i++)
    {
        medics[i].setId();
        medics[i].getId();
    }

    return 0;
}