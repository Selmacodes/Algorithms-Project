#include <iostream>
#include <cstring>
using namespace std;
class personeller{
	char personel_adi[20],personel_soyadi[20];
	int yas;
	public:
		void arsiv(char*padi,char*psoyadi,int sayi){
			strcpy(personel_adi,padi);
			strcpy(personel_soyadi,psoyadi);
			yas=sayi;
		}
		void goruntule(){
			cout<<"personel adi:"<<personel_adi<<endl;
			cout<<"personel soyadi:"<<personel_soyadi<<endl;
			cout<<"personel yasi:"<<yas<<"n\n";
		}
}pers1,pers2,pers3;
int main() {
	pers1.arsiv("muhammed","mastar",22);
	pers2.arsiv("suha","eris",21);
	pers3.arsiv("tahir","vural",20);
	pers1.goruntule();
	pers2.goruntule();
	pers3.goruntule();
	
	return 0;
}
