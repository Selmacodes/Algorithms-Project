#include <iostream>
#include  <string>
using namespace std;
class kisiler{
	string ad,soyad;
	int yas;
	public:
		kisiler(string a,string s,int y){
			ad=a;
			soyad=s;
			yas=y;
		}
		void kisial(){
			cout<<"ad:"<<ad<<endl;
			cout<<"soyad:"<<soyad<<endl;
			cout<<"yas:"<<yas<<endl;
		}
};
int main() {
	int i;
	kisiler kisi[4]={kisiler("suha","eris",20),
	kisiler("muhammed","mastar",21),
	kisiler("tahir","vural",20),
	kisiler("eniz","bilgin",20)
	};
	for(i=0;i<4;i++){
		kisi[i].kisial();
		cout<<"----------\n";
	}
	
	return 0;
}
