#include <iostream>
#include <string>
using namespace std;
class kisiler{
	string ad,soyad;
	int yas;
	public:
		void kisigir();
		void kisial(){
			cout<<"ad:"<<ad<<endl;
			cout<<"soyad:"<<soyad<<endl;
			cout<<"yas:"<<yas<<endl;
		}
};
void kisiler::kisigir(){
	string x,y;
	int z;
	cout<<"ad giriniz:";
	cin>>x;
	cout<<"soyad giriniz:";
	cin>>y;
	cout<<"yas giriniz:";
	cin>>z;
	cout<<"-------\n";
	ad=x;
	soyad=y;
	yas=z;
}
int main() {
	int i,j;
	kisiler kisi[2][2];
	for(i=0;i<2;i++)
	for(j=0;j<2;j++){
		kisi[i][j].kisigir();
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++){
		kisi[i][j].kisial();
		cout<<"-----------\n";
	}
	return 0;
}


