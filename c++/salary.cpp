#include <iostream>
using namespace std;
int main(){
    int basicpay;
    cout << "basic pay of a person :" ;
    cin>>basicpay;
    float dallowance,hrallowanc,valowance;
    dallowance = 0.5*basicpay;
hrallowanc= 0.2*basicpay;
valowance=0.1*basicpay;
cout << basicpay<<endl;
cout << dallowance<< endl;
cout << hrallowanc<<endl;
cout << valowance;
float totalsalary = basicpay + dallowance+hrallowanc+valowance;
cout << "\nTotal salary of a person is :" << totalsalary;
return 0;
}