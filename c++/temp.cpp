#include <iostream>
using namespace std;
int main () {
    float temc,temf;
    char ch;
    cout <<"Enter the unit you want to convert the temperature(F/C)  :\n";
    cin>> ch;
    if(ch=='C'|| ch=='c'){
cout << "enter the temperature value in faherenheit :\n";
cin >> temf;
temc=((temf -32)*5)/9;
cout << "\ntemperature in celcius is :" <<temc;
    }
    else {
      cout << "enter the temperature value in celcius :\n";
cin >> temc;
temf = 9*temc/5+32;
cout << "\ntemperature in celcius is :" <<temf;  
    }
    return 0;
    }