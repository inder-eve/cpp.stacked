#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not swap a and b
int swap(int a, int b){  //temp a b
    int temp = a;        // 4  4 5
    a = b;               // 4  5 5
    b = temp;            // 4  5 4
}

//Call by reference using pointers
int swapPointer(int* a, int* b){  //temp a b
    int temp = *a;                // 4  4 5
    *a = *b;                      // 4  5 5
    *b = temp;                    // 4  5 4
} 

//Call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){  //temp a b
    int temp = a;                      // 4  4 5
    a = b;                             // 4  5 5
    b = temp;                          // 4  5 4
} 

#int main(){
    int x = 4, y = 5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"the value of x is "<<x<<"the value of y is"<<y<<endl;

    swap(x, y); //this will not swap a and b

    swapPointer(&x, &y); //this will swap a and b using pointer reference

    swapReferenceVar(x, y); //this will swap a and b using reference variable
    
    cout<<"the value of x is "<<x<<"the value of y is"<<y<<endl;
    
    return 0;
}