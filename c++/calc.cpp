#include <iostream>
using namespace std;
int main () {
    int a,b;
    char ch;
    cout << "enter the first number :";
    cin>> a;
    cout << "enter the second number :";
    cin>> b;
    cout<<"enter the operator('+','-','*','/') :";
    cin>>ch;

    int sum,substract,multiply,divison;
    switch(ch){
        case '+':
    sum =a+b;
    cout<<"sum : "<<sum;
    break;
    case '-':
    if(a>b){
        substract =a-b;
    }
    else substract=b-a;
     cout<<"\nsubstract : "<<substract;
    break;
    case '*':
    multiply =a*b;
    cout<<"\n multiply : "<<multiply;
    break;
    case '/':
    divison=a/b;
    cout<<"\ndivison : "<<divison;
    break;
    default:
    cout<< "enter the valid character\n";
    }
    return 0;

}