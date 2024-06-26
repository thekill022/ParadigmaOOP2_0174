#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) : umur(pUmur) {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

//pembuatan class pekerja sebagai pewaris dari non-polymotphy class orang dan pembuatan prosedur untuk memberi nilai dan display data umur
class pelajar : public orang {
public:
    pelajar(int pUmur) : orang(pUmur) {
        cout << "Pelajar dibuat\n" << endl;
    }
};

//pembuatan class pekerja sebagai pewaris dari non-polymotphy class orang dan pembuatan prosedur untuk memberi nilai dan display data umur
class pekerja : public orang {
public:
    pekerja(int pUmur) : orang(pUmur) {
        cout << "Pelajar dibuat\n" << endl;
    }
};

//pembuatan dan pendefinisian class budi serta member sebagai solvemultiwaris dari class pekerja dan pelajar
class budi : public pekerja, public pelajar {
public:
    budi(int pUmur) :
        pekerja(pUmur),
        pelajar(pUmur)
    {
        cout << "Budi dibuat\n" << endl;
    }
};

int main()
{
    
    //deklarasi dan pemberian nilai pada objek a
    budi a(12);

    return 0;

}
