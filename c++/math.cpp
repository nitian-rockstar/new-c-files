#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b;
    cout<<"enter the  two number: ";
    cin>>a;
    cin>>b;
    cout<<"the maximum number between these two is :"<<max(a,b);
     cout<<"\nthe minimum number between these two is :"<<min(a,b);
      cout<<"\nthe square root of the number " <<a << " is :"<<sqrt(a);
      cout<<"\nthe square root of the number " <<b << " is :\n"<<sqrt(b);
      cout <<acos(a);
    return 0;
}