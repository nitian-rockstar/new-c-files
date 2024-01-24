#include <iostream >
using namespace std;
class vehicle {
    public :
    string brand = "volvo";
    void honk (){
        cout << "Tuut , tuut ! \n";
    }

};
class car : public vehicle {
    public :
    string model = " Mahindra thar\n";
};
int main () {
    car obj;
    obj.honk();
    cout << obj.brand  << " " << obj.model ;
    return 0;
}