#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	int kullanici,rastgele;
	cout<<"lutfen tahmininizi giriniz(1 ile 10 arasýnda)";
	cin>>kullanici;
	if(kullanici<=10&&kullanici>=1){
		rastgele=rand() % 10 +1;
		if(rastgele==kullanici){
			cout<<"tahmininiz dogru"<<endl;
		}
		else{
			cout<<"tahmininiz yanlis"<<endl;
			cout<<rastgele<<endl;
		}
	}
	else{
	cout<<"verilen araliklar disinda  girdiniz"<<endl;
	}
	return 0;
}
