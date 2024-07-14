#include <iostream>
using namespace std;
class dikdortgen{
	public:
		int kisa_kenar;
		int uzun_kenar;
		int alan(){
			return kisa_kenar*uzun_kenar;
		}
		int cevre(){
			return 2*(uzun_kenar+kisa_kenar);
		}
	
}x;
int main() {
	cout<<"kisa kenari giriniz:";
	cin>>x.kisa_kenar;
	cout<<"uzun kenari giriniz:";
	cin>>x.uzun_kenar;
	cout<<"dikdortgen alani:"<<x.alan()<<endl;
	cout<<"dikdortgen cevresi:"<<x.cevre()<<endl;
	
	return 0;
}
