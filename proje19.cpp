#include <iostream>

using namespace std;

int main() {
	int sayidizi[3]={10,11,12};
	int dizi1[10];
	string isimdizi[2]={"sefa","ahmet"};
	cout<< "sayidizisi[0]:"<<sayidizi[0]<<endl;
	for(int i=0;i<10;i++){
		dizi1[i]=i;
		cout<<dizi1[i]<<endl;
	}
	return 0;
}
