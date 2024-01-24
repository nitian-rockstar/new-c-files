#include <iostream>
using namespace std;
class myclass{
    public :
    int speed(int maxspeed);
};
int myclass :: speed (int maxspeed){
    cout << "Enter the max speed of the vehicle :";
   
    cout <<"\n";
    return maxspeed;
}
int main () {
    myclass car1;
    cout << car1.speed(100)<<"\n";
    myclass car2;
    cout << car2.speed(120);
    return 0;


}