#include <iostream>

using namespace std;
class personel{
	protected:
		string tc;
		string isim;
		string soyisim;
		int yas;
	public:
	
		personel(){
			tc="00000000000";
			isim="";
			soyisim="";
			yas=0;
		}
	personel(string tc,string isim,string soyisim,int yas){
		this->tc=tc;
		this->isim=isim;
		this->soyisim=soyisim;
		this->yas=yas;
	}
};
class ogretmen:public personel{
	public:
	string sinif;
	ogretmen(string tc,string isim,string soyisim,string sinif,int yas){
		this->tc=tc;
		this->isim=isim;
		this->soyisim=soyisim;
		this->yas=yas;
		this->sinif=sinif;
		}
		string gettc(){
			return tc;
			
		}
};
class hademe:personel{
	public:
		int kat;
		hademe(string tc,string isim,string soyisim,int kat,int yas){
		this->tc=tc;
		this->isim=isim;
		this->soyisim=soyisim;
		this->yas=yas;
		this->kat=kat;
		}
		int getyas(){
			return yas;
		}
};
int main() {
	ogretmen sefa("11111111111","sefa","ekici","1-c",21);
	hademe sefa1("11111111112","sefa","ekici",1,21);
	cout<<"sefa1:"<<sefa1.getyas()<<endl;
	cout<<sefa.sinif<<endl;
	cout<<sefa.gettc()<<endl;
	
	return 0;
}
