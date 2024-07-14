#include <iostream>
using namespace std;
class ogrenci{
	private:
		int yas;
		string isim;
	public:
		ogrenci(int yas,string isim){
			this->yas=yas;
			this->isim=isim;
		}
		friend void bilgilerigetir(ogrenci ogrenci);
};
void bilgilerigetir(ogrenci ogrenci){
	cout<<ogrenci.isim<<" "<<ogrenci.yas<<" "<<endl;
}
int main() {
	ogrenci ogrenci(12,"sefa");
	bilgilerigetir(ogrenci);
	return 0;
}
