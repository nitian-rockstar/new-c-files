#include <iostream >
#include <fstream>
using namespace std;
int main () {
    ofstream myfile("newfile.txt");
    myfile << "files can be tricky ,but it is fun enough !";
     myfile .close();
     string mytext;
     ifstream myreadfile ("newfile.txt");
     while(getline(myreadfile,mytext))
     {
        cout << mytext;

     }
     myreadfile.close();
}