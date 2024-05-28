#include <iostream>
using namespace std;

//membuat class baseclass, untuk mencegah polymorphism tambahkan final diujung class
class baseClass //final
{
public:
    virtual void perkenalan() {
        cout << "Hali saya Function dari base class";
    }
};

//jika menggunakan final di ujung class, maka pewarisan semacam ini tidak akan bisa
class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Halo saya Function dari derived class";
    }
};

int main()
{
   
    derivedClass a;
    a.perkenalan();

    return 0;

}
