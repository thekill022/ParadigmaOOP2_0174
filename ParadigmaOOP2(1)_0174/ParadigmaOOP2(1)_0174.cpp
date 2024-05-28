#include <iostream>
using namespace std;

//membuat class seseorang
class seseorang {
public:
    //pure virtual function
    virtual void pesan() = 0;


    //virtual function biasa
    //virtual void pesan() {
    //    cout << "pesan dari seseorang" << endl;
    //}

};


//membuat class joko sebagai pewaris dari class seseorang
class joko : public seseorang {

};

int main() {

}
