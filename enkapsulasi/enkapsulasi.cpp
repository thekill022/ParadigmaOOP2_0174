#include <iostream>
using namespace std;

//membuat class remoteLampu
class remoteLampu
{
	//deklarasi array saklarNO dengan akses modifier private
private:
	string saklarNo[10];

public:
	//membuat prosedur setSaklarNo untuk memberi nilai index pada array saklarNo
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}

	//membuat function getSaklarNo untuk menampilkan nilai index pada array saklarNo
	string getSaklarNo(int i) {
		return saklarNo[i];
	}

};

int main()
{
   
}
