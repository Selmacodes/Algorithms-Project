#include <iostream>

using namespace std;

int main() {
	int sayilar[4]={66,77,88,99};
	int*ptr=sayilar;
	cout<<"1.eleman:"<<*ptr<<endl;
	ptr++;
	cout<<"2.eleman:"<<*ptr<<endl;
	ptr++;
	cout<<"3.eleman:"<<*ptr<<endl;
	ptr++;
	cout<<"4.eleman:"<<*ptr<<endl;
	return 0;
}
