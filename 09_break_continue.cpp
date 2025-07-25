#include<iostream>
using namespace std;

#int main(){
    for (int  i = 0; i<40; i++)
    {
        if(i==2){
            break;
        }
        cout<<1<<endl;
    }

    for(int i = 0; i<40; i++)
    {
        if(i == 2){
            continue;
        }
        cout<<1<<endl;
    }







    return 0;
}
