#include <iostream>
using namespace std;

//membuat class abstraksi
class abstraksi {

    //delarasi variabel string dengan akses modifier private pada class abstraksi
private:
    string x, y;

public:
    //method untuk mengisi nilai private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }

    //prosedur untuk menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

};

int main()
{
    //deklarasi obyek variabel ak
    abstraksi ak;
    //pemanggilan dan pemberian nilai pada prosedur - prosedur class abstraksi
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();

    return 0;
    
}
