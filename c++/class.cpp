#include <iostream>
using namespace std;
class student{
    public:
    int num;
    string name;
};
int main () {
    student boy;
    boy.num=10;
    boy.name= "ram";
    student girl;
    girl.num=10;
    girl.name= "seeta";
    cout << boy.num <<"\n";
    cout << boy.name <<"\n";
    cout << "for girls\n";
    cout <<girl.num <<"\n";
    cout << girl.name <<"\n";
    return 0;
}
