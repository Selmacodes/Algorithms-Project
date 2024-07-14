#include <iostream>
#include <string>
using namespace std;
class isciler{
	string ad,soyad;
	int saat_ucreti,calistigi_saat;
	double aylik_maas;
	public:
		void bilgi_gir(){
			cout<<"iscinin adini gir:";
			cin>>ad;
			cout<<"iscinin soyadini gir:";
			cin>>soyad;
			cout<<"iscinin 1 saatte aldigi ucret:";
			cin>>saat_ucreti;
			cout<<"isci 1 ayda kac saat calisti?:";
			cin>>calistigi_saat;
		}
		double maas(){
			return aylik_maas=saat_ucreti*calistigi_saat;
		}
		void goster(){
			cout<<"iscinin adi:"<<ad<<endl;
			cout<<"iscinin soyadi:"<<soyad<<endl;
			cout<<"iscinin maasi:"<<maas()<<endl;
			yorum(maas());
		}
		void yorum(double aylik_maas){
			if(aylik_maas){
				cout<<"maasi asgari ucretten yuksek."<<endl;
			}
			else{
				cout<<"maasi asgari ucretten dusuk."<<endl;
			}
		}
}isci1,isci2;
int main() {
	isci1.bilgi_gir();
	cout<<"-----------\n";
	isci2.bilgi_gir();
	cout<<"-----------\n";
	cout<<"iscilerin bilgileri\n\n";
	isci1.goster();
	cout<<"-----------\n";
	isci2.goster();
	return 0;
}
