#include <iostream>
using namespace std;
inline int dikdortgen(int sayi1,int sayi2){
	return sayi1*sayi2;
}
int main() {
	int sayi1,sayi2;
	cout<<"kisa kenar:";
	cin>>sayi1;
	cout<<"uzun kenar";
	cin>>sayi2;
	cout<<"dikdortgenin alani:"<<dikdortgen(sayi1,sayi2)<<endl;
	return 0;
}
