#include <iostream >
using namespace std;
class animal {
    public :
void animalsound () {
    cout << "The animal makes a sound :\n";

}

};
class dog : public animal {
    public :
    void animalsound () {
    cout << "the dog says :bow wow\n";

}
};
class pig : public animal {
    public :
    void animalsound () {
    cout << "The Pig says : Wee wee\n";

}
};
int main () {
    animal myanimal;
    pig mypig;
    dog mydog;
    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;
}