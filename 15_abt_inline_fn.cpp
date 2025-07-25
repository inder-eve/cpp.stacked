#include <iostream>
using namespace std;

int product(int a, int b)
{
    // Not recommended to use below lines with the inline functions
    //  static int c = 0; // This executes only once
    //  c = c + 1;        // Next time this function is run, the value of c will be retained
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int a, b;
    // cout<<" enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is"<<product(a,b)<<endl;
    int money = 1000000;
    cout << "if you have" << money << " Rs in your bank account, you will receive" << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "fpr VIP: if you have " << money << "Rs in your bank account, you will receive" << moneyReceived(money, 1.1) << "Rs after 1 year";

    return 0;
}