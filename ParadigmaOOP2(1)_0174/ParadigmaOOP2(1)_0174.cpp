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


public:
    //deklarasi
    void pesan() {
        //implementasi
        cout << "pesan dari joko" << endl;
    }
};

//membuat class lia sebagai pewaris dari class seseorang
class lia : public seseorang {
public:
    //deklarasi
    void pesan() {
        //implementasi
        cout << "pesan dari lia" << endl;
    }
};


int main() {
    //deklarasi objek variabel dari class seseorang, joko, dan lia
    seseorang* obyek;
    joko a;
    lia b;
    

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    

}
