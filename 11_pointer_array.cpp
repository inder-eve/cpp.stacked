#include<iostream>
using namespace std;

int main(){
int marks[] = {23, 45, 56, 89};
int mathMarks[4];
mathMarks[0] = 2278;
mathMarks[1] = 738;
mathMarks[2] = 378;
mathMarks[3] = 578;

cout<<"these are marks"<<endl;
cout<<mathMarks[0]<<endl;
cout<<mathMarks[1]<<endl;
cout<<mathMarks[2]<<endl;
cout<<mathMarks[3]<<endl;


// You can change value of an array
marks[2] = 455;
cout<<"these are marks"<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;


for (int i = 0; i < 4; i++)
{
    cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
}

// Quick quiz: do the same for while or do-while loop

// Pointers and arrays 
int* p = marks;
cout<<*(p++);
cout<<*(++p);
cout<<"the value of *p is "<<*p;
cout<<"the value of *(p+1) is "<<*(p+1);
cout<<"the value of *(p+2) is "<<*(p+2);
cout<<"the value of *(p+3) is "<<*(p+3);



    return 0;

}