#include <iostream>
#include <string>
using namespace std;
class nesneden_nesneye{
	int a;
	public:
		void atama_yap(int);
		int goruntule();
};
	void nesneden_nesneye::atama_yap(int sayi){
		a=sayi;
	}
	int nesneden_nesneye::goruntule(){
		return a;
	}
int main() {
	nesneden_nesneye nesne1,nesne2;
	nesne1.atama_yap(123);
	nesne2=nesne1;
	cout<<"Nesne 1 degeri:"<<nesne1.goruntule()<<endl;
	cout<<"Nesne 2 degeri:"<<nesne2.goruntule()<<endl;

	return 0;
}
