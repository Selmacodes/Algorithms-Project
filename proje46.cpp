#include <iostream>
#include <string>
using namespace std;
class sayilar{
	public:
		int a,b,c;
		sayilar(){
			a=1,b=4,c=15;
		}
}sayi;
int main(){
	cout<<"A degeri:"<<sayi.a<<endl;
	cout<<"B degeri:"<<sayi.b<<endl;
	cout<<"C degeri"<<sayi.c<<endl;
	return 0;
}
