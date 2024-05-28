#include <iostream>
using namespace std;

//deklarasi dan pembuatan prosedur untuk pemberan nilai dan display data umur pada class orang
class orang {
public:
    int umur;

    orang(int pUmur) : umur(pUmur) {
        cout << "Orang dibuat dengan umur " << umur << endl;
    }
};

//pembuatan class pekerja sebagai pewaris dari class orang dan pembuatan prosedur untuk memberi nilai dan display data umur
class pekerja : virtual public orang {
public:
    pekerja(int pUmur) : orang(pUmur) {
        cout << "Pekerja dibuat" << endl;
    }
};

//pembuatan class pelajar sebagai pewaris dari class orang dan pembuatan prosedur untuk memberi nilai dan display data umur
class pelajar : virtual public orang {
public:
    pelajar(int pUmur) : orang(pUmur) {
        cout << "Pelajar dibuat" << endl;
    }
};

int main()
{
    
}
