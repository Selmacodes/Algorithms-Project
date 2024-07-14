#include <iostream>
#include <string>
using namespace std;
class insanlar{
	string ad,soyad;
	int yas;
	public:
		insanlar(string a,string s,int y){
			ad=a;
			soyad=s;
			yas=y;
		}
		void goster(){
			cout<<"Ad:"<<ad<<endl;
			cout<<"Soyad:"<<soyad<<endl;
			cout<<"Yas:"<<yas<<endl;
			cout<<"----------\n"<<endl;
		}
};
int main() {
	insanlar insan1("ozlem","zor",21);
	insanlar insan2("sezen","aksu",21);
	insanlar insan3("cagla","eris",20);
	insan1.goster();
	insan2.goster();
	insan3.goster();
	return 0;
}
