
//there are two types of header file :
// 1. system header file: it comes with the compiler 
#include <iostream>
// 2. user defined header files: it is written by the programmer 
#include "this.h" //-->this will produce an error if this.h is not present in the current directory

using namespace std;

int main (){
   int a=4 , b=5;
   cout<<"operators in c++:"<<endl; 
   cout<<"following are the types of operators in c++"<<endl


    // Arithmetic operators
    cout<<"the value of a+b is "<<a+b<<end1;
    cout<<"the value of a-b is "<<a-b<<end1;
    cout<<"the value of a*b is "<<a*b<<end1;
    cout<<"the value of a/b is "<<a/b<<end1;
    cout<<"the value of a%b is "<<a%b<<end1;
    cout<<"the value of a++ is "<<a++<<end1;
    cout<<"the value of a-- is "<<a--<<end1;
    cout<<"the value of ++a is "<<++a<<end1;
    cout<<"the value of --a is "<<--a<<end1;

    // Assignment operators --> used to asssign values to variables
    int a=3, b=9;
    char d= 'd';

    // comparison operators
    cout<<"following are the comparison operators in c++"<<end1;
    cout<<"the value of a == b is "<<(a==b)<<end1;
    cout<<"the value of a != b is "<<(a!=b)<<end1;
    cout<<"the value of a >= b is "<<(a>=b)<<end1;
    cout<<"the value of a <= b is "<<(a<=b)<<end1;
    cout<<"the value of a > b is "<<(a>b)<<end1;
    cout<<"the value of a < b is "<<(a<b)<<end1;

    //Logical operators
    cout<<"following are the logical operators in c++"<<end1;
    cout<<"the value of this logical and operator ((a==b)&&(a<b)) is:"<<((a==b)&&(a<b))<<end1;
    
    

    return 0;

}