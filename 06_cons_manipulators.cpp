#include<iostream>
#include<iomanip>
 
using namespace std;

int main(){

    // constants in c++

    const int a = 3;
    cout<<"the value of a was: "<<a<<endl;
    a = 45; //you will get an error because a is constant 
    cout<<"the value of a is: "<<a<<endl;

    // Manipulators in c++

    int a = 3, b = 78, c = 1233;
    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;

    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(4)<<b<<endl;
    cout<<"the value of c is: "<<setw(4)<<c<<endl;

    // Operator precedence (we can see table of precedence in c++)
    int a = 3, b = 4;
    int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);


    return 0;



    

}