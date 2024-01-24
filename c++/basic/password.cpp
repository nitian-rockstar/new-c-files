#include <iostream>
#include <string>
using namespace std;
int main () {
    string fname;
    string flname;
    string phonenum;
    string email;
    cout << "Enter your first name :";
    cin >> fname;
    cout << "\nEnter your last name :";
    cin >>flname;
     cout << "\nEnter your address :";
    string address;
    cin.ignore();
     getline(cin, address);
    cout << "\nEnter your mobile number :";
    cin >> phonenum;
    cout << "\n Enter your Email-id :";
    cin >> email;
    int storepassword =1234;
    cout << "please set a 4 digit password :" << endl;
    int newpassword;
    cin >> newpassword ;
    if(newpassword >=1000 && newpassword<=9999){
        storepassword=newpassword;
        cout <<"\n Password set succesfully !"<< endl;

    } else {
        cout << "Invalid digits ! please enter a four digit password \n";
        return 1;
    }
    int enteredpassword;
    cout << "Enter the four digit password to access the accout :" << endl;
    cin >> enteredpassword;
    if(enteredpassword==storepassword){
        cout << "Access granted ! Welcome to your Account" << endl;
    }
    else {
        cout << "Incorrect password. Access denied ." <<endl;
        
    }
    cout << "\nYour full name is :" << fname <<" "<< flname <<endl;
    cout << "\nYour phone Number is :" <<phonenum << endl;
    cout << "\nYour Email-id is :" << email << endl;
    cout << "\nYour full address is :" << address << endl;
    return 0;
}