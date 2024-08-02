#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char dizi[100];
	cout<<"bir cumle girin:";
	gets(dizi);
	strrev(dizi);
	cout<<"\n cumlenin tersi:";
	puts(dizi);
	cout<<endl;
	return 0;
}
