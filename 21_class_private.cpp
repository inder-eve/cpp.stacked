#include <iostream>
using namespace std;

class Employee
{
    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << " the Id of the employee is " << Id << " and this is the employee number " << count << endl;
    }

    static void getcount(void)
    {
        cout << " the value of count is " << count << endl;
    }
};

// count is the static data member of class Employee
int Employee ::count; // default value is 0

int main()
{
    Employee PIYUSH, ISHAAN, HARSHIT;
    // PIYUSH.Id = 1;
    // PIYUSH.count = 1;    // can't do this as Id and count are private

    PIYUSH.setData();
    PIYUSH.getData();
    Employee::getcount();

    ISHAAN.setData();
    ISHAAN.getData();
    Employee::getcount();

    HARSHIT.setData();
    HARSHIT.getData();
    Employee::getcount();

    return 0;
}