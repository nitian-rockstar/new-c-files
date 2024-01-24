#include <iostream>
#include <string.h>
using namespace std;
int main() {
    bool iscold =true;
    bool issummer=false;
    cout<< iscold << endl;
    cout << issummer;
    char a=65,b=66,c=67;
    cout << a;
    cout << b;
    cout << c;
    string firstname="\nPRATEEK ";
    string lastname ="DIWAKAR";
    string fullname = firstname.append(lastname);
    cout <<fullname;
    cout<<fullname.length();
    string mystring;
    getline(cin,mystring);
    cout<< mystring << endl;
    cin>> mystring;
    cout<< mystring<< endl;
    return 0;
}