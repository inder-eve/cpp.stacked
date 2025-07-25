#include <iostream>
using namespace std;

// BASE CLASS
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {};
};

// DERIVED CLASS syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
 Notes :-
  - Default visibility mode is private
  - Private visibility mode: Public member of base class becomes public member of derived classs
  - Public visibility mode: Public members of base class become private member of derived class
  - Private members are never inherited
  */

// Creating a programmer class derived from Employee base class
class programmer : public Employee
{

public:
    programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getData()
    {
    }
};

int main()
{
    Employee PIYUSH(1), ISHAAN(2);
    cout << PIYUSH.salary << endl;
    cout << ISHAAN.salary << endl;
    programmer skillF(1);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}