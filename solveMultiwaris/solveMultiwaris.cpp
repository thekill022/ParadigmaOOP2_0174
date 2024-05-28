#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) : umur(pUmur) {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

//pembuatan class pelajar sebagai pewaris dari non-polymotphy class orang dan pembuatan prosedur untuk memberi nilai dan display data umur
class pekerja : public orang {
public:
    pekerja(int pUmur) : orang(pUmur) {
        cout << "Pekerja dibuat\n" << endl;
    }
};

int main()
{
    
}
