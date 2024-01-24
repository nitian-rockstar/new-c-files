#include <iostream >
using namespace std;
int main () {
    int a,b;
    cout << "enter the first number: ";
    cin >> a;
    cout << "\nenter the second  number: ";
    cin >> b;
    cout << "\nthe two number  before swapping are : "<<a <<"\t"<<b;
// int swap;
// swap=a;
// a=b;
// b=swap;
a= a+b;
b= a-b;
a =a-b;
cout << "\nthe two number after swaping are : "<<a <<"\t"<<b;
return 0;
}