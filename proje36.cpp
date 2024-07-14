#include <iostream>
using namespace std;
class ogrenci{
	private :
		string isim;
		int okulno;
		int dersnot;
	public:
		ogrenci(){
			isim="sefa";
			okulno=1;
			dersnot=0;
		}
	ogrenci(string isim,int okulno,int dersnot){
		this->isim=isim;
		this->okulno=okulno;
		this->dersnot=dersnot;
	}
	ogrenci(string isim){
		this->isim=isim;
		okulno=1;
		dersnot=0;
	}
	string isimgetir(){
		return isim;
	}
	int okulnogetir(){
		return okulno;
	}
	int dersnotugetir(){
		return dersnot;
	}
	void setdersnotu(int deger){
		dersnot=deger;
	}
	void setokulno(int deger){
		okulno=deger;
	}
};
int main() {
	ogrenci ogrenci1;
	cout<<ogrenci1.isimgetir();
	ogrenci ogrenci2("aleyna",2,100);
    cout<< ogrenci2.isimgetir()<<endl;
	cout<< ogrenci2.okulnogetir()<<endl;
	cout<<ogrenci2.dersnotugetir()<<endl;
	ogrenci2.setdersnotu(30);
	cout<<ogrenci2.dersnotugetir()<<endl;
	ogrenci2.setokulno(3);
	cout<<ogrenci2.okulnogetir()<<endl;
	return 0;
}
