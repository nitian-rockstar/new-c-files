//Encapsulation
#include <iostream >
using namespace std ;
class employee {
    // private attributes
    private :
    int salary;
    //setter
    public :
    void setsalary (int s){
        salary=s;
    }
    //getter
    int  getsalary (){
        return salary;
    }
};
int main () {
    employee obj;
    obj.setsalary(200);
    cout <<obj.getsalary();


    return 0;
}