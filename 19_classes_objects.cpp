// OOPs - classes and object

// C++ - initially called --> c with classes by stroustroup
// classes - extension of structure (in C)
// Structures has limitations
//       --> members are public
//       --> no methods
// classes - structures + more
// classes - can have methods and properties
// classes - can make few members as private and few as public
// structures in C++ are typedefed
// you cab declare objects along with the class declaration like this :

     /*class Employee{
        class defination
     } ISHAAN , PIYUSH, HARSHIT; */

//PIYUSH.salary = 800000000000 make no sense if salary is private

// nesting of memer functions

#include<iostream>
#include<string>
using namespace std;

class binary 
{
    string s;

public:
      void read(void);
      void chk_bin(void);
      void ones_compliment(void);
      void display(void);
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        
        }
    }
    
}


void binary :: ones_compliment(void)
{
     for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';   
        }
        else
        {
            s.at(i) = '0';
        }
        
     }

}

void binary :: display(void)
{
    cout<<"displaying binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;

}

int main(){

binary b;
b.read();
b.chk_bin();
b.ones_compliment();
b.display();


    return 0;
}