#include <iostream>
using namespace std;
class goster{
	int sayi;
	public:
		void atama_yap(int a){
			sayi=a;
		}
	int ekrana_yaz(){
		return sayi;
	}
}x,y;

int main() {
	x.atama_yap(50);
	y.atama_yap(100);
	cout<<x.ekrana_yaz()<<endl;
	cout<<y.ekrana_yaz()<<endl;
	
	return 0;
}
