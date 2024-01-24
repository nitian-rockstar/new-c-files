#include <iostream >
using namespace std;
class car {
    public :
    string model;
    string brand;
    int year;
    car (string x,string y,int z);
};
car :: car (string x,string y,int z){
    brand =x;
    model =y;
    year=z;
}
int main () {
    car obj1("volvo","2012x",2021);
    car obj2 ("mahindra thar","ew23sd",2023);
    cout << obj1.brand <<" "<<obj1.model <<" " <<obj1.year<<"\n";
     cout << obj2.brand <<" "<<obj2.model <<" " <<obj2.year<<"\n";
    return 0;

}