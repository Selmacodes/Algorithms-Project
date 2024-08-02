#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char dizi1[]="muhammed mastar";
	char dizi2[]="suha eris";
	char *dizi3,*b,a;
	dizi3=strstr(dizi1,"ed");
	puts(dizi3);
	cout<<"bir karakter girin:";
	cin>>a;
	b=strchr(dizi2,a);
	if(b==NULL) cout<<"aranan karakter dizide yok."<<endl;
	else cout<<b<<endl;
	return 0;
}
