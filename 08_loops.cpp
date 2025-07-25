#include<iostream>

using namespace std;

int main(){
    /*  Loops in c++:
    There are three types of loops in c++
         1. For loop
         2. While loop 
         3. Do-While loop
    
    */

   /* For loop in c++ */
   int i = 1;
   cout<<i<<endl;
   i++;


// Syntax for for loop
// for(initialization; condition; updation)
// {
//     loop body(c++ code );
// }


for (int i = 0; i < 4; i++)
{
    cout<<i<<endl;
    i++;

}


//Example for infinite  for loop 
for (int i = 1; 34 <= 40; i++ )
{
    cout<<i<<endl;
}


/* While loop in c++ */
// Syntax:
// while(condition)
// {
//     c++ statements;
// }


// Printing 1 to 40 using while loop 
int i=1;
while(i<=40){
    cout<<i<<endl;
    i++;
}


// Example of infinite while loop 
int i = 1;
while(true){
    cout<<i<<endl;
    i++;
}

/* do while loop in c++*/
   //Syntax:
// do{
//     c++ statements;
// }while (condition)

//Printing 1 to 40 using do-while loop 
int i=1;
do{
    cout<<i<<endl;
    i++;
}while(i<=40);



    return 0;

}