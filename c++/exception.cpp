#include <iostream>
using namespace std;

int main () {
    try{
        int age;
        cout << "Enter your age :";
        cin>> age;
        if(age>=18){
            cout << "access granted - you are old enough .";
        }
        else {
            throw (age);
        }
    }
    catch(int mynum){
        cout << "Access Denied - you must be at least 18 years old .\n";
        cout << "Your Age is : "<< mynum;
    }
    return 0;
}