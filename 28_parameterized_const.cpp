#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:

    complex(int, int); // Constructor declartion

    void printNumber()
    {
        cout << " Your number is " << a << "+" << b << "i" << endl;
    }
};

complex :: complex(int x, int y)  // -> This is a parameterized constructor as it takes 2 parameeters
{
    a = x;
    b = y;
}


int main(){

    // Implict call
    complex a( 4, 6 );

    // Explicit call
    complex b = complex(5, 7);

    a.printNumber();
    b.printNumber();

    

    return 0;
}