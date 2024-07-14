#include <iostream>
using namespace std;
class kamyon;
class araba{
	int kisi_sayisi,hiz;
	public:
	araba(int y,int h){
		kisi_sayisi=y;
		hiz=h;
	}
	int arkadaslik(kamyon k);
};
class kamyon{
	int tonaj,hiz;
	public:
		kamyon(int a,int h){
			tonaj=a;
			hiz=h;
		}
		friend int araba::arkadaslik(kamyon k);
};
int araba::arkadaslik(kamyon k){
	return hiz-k.hiz;
}
int main() {
	int m;
	araba araba1(2,225);
	araba araba2(4,85);
	kamyon kamyon3(30000,75);
	kamyon kamyon4(32000,85);
	cout<<"araba1ve kamyon3:\n";
	m=araba1.arkadaslik(kamyon3);
	if(m<0)
	cout<<"kamyon daha hizli";
	else if(m==0)
	cout<<"kamyon ile arabanin hizlari esit.\n";
	else
	cout<<"araba daha hizli.\n";
	cout<<"\naraba2 ve kamyon4:\n";
	m=araba2.arkadaslik(kamyon4);
	if(m<0)
	cout<<"kamyon daha hizli";
	else if(m==0)
	cout<<"kamyon ile arabanin hizlari esit.\n";
	else
	cout<<"araba daha hizli.\n";
	return 0;
}
