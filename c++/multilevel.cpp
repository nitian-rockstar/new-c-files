#include <iostream >
using namespace std;
class parent {
    public :
    void myfunction (){
        cout << "Some content in parent class\n";

    }
};
class child : public parent {
    public :
    void functn() {
        cout << "Some content in child class \n";
    }
};
class grandchild : public child {
    public:
   void functn1() {
        cout << "Some content in grandchild class \n";
    } 
};
int main () {
    grandchild ram;
    ram.myfunction();
    ram.functn();
    ram.functn1();


}