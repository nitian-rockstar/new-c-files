#include <iostream >
using namespace std;
class parents {
    public :
    void myfunction() {
        cout << "Some content in parents class\n";

    }
};
class teacher{
    public :
    void myfunction1() {
        cout << "Some content in teacher class\n";

    }
};
class student : public parents, public teacher {
    public :
    void myfunction2() {
        
        cout << "Some content in student class\n";

    }
};
int main () {
    student ram;
    ram.myfunction();
    ram.myfunction1();
    ram.myfunction2();
    return 0;
}
