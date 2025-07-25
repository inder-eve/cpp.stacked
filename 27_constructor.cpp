#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /* Creating a Constructor
     - Constructor is a special member function with the same name as of the class.
     - It is used to initialize the objects of its class.
     - It is automatically invoked when ever an object is created.
     */

    complex(void); // Constructor declartion

    void printNumber()
    {
        cout << " Your number is " << a << "+" << b << "i" << endl;
    }
};

complex :: complex(void)  // -> This is a default constructor as it accepts no parameeters
{
    a = 0;
    b = 0;
}



int main()
{
    complex c;
    c.printNumber();

    return 0;
}

/* Properties of constructor
 - should be declare in the public section of the class
 - they are automatically invoked whenever the objects is created
 - they cannot return values and do  not have return types
 - it can have default arguments
 - we can't refer to their adresses
 */