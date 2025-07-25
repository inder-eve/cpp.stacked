#include<iostream>
using namespace std;

 typedef struct employee
{
    int eId;
    char favchar;
    float salary;
} ep;

union  money
{
    int phone;
    char car;
    float pounds;
};

int main(){

enum Meal{ breakfast, lunch, dinner};
Meal m1 = lunch;
cout<<(m1==1);

    union money m1;
    m1.phone = 34;
    m1.car = 's';
    
    struct employee piyush;
    struct employee ishaan;
    struct employee harshit;

    harry.eId = 1;
    harry.favchar = 'c';
    harry.salary = 120000;
    cout<<"the value is "<<harry.eId<<endl;
    cout<<"the value is "<<harry.favchar<<endl;
    cout<<"the value is "<<harry.salary<<endl;

  



    return 0;
}