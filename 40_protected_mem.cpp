#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;

};

/*

For a protected member :
                        
                         Public Derivation      Private Derivation      Protected Derivation
1. Private members        Not Inherited           Not Inherited             Not Inheited
2. protected members       Protected                Private                   Protected
3. Public members           Public                  Private                   Protected

*/

class Derived{

};

int main(){
    Base b;
    Derived d;
    cout<<d.a;  // Will not work since a is protected in both base as well as derived class 
    return 0;
}