#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
	char x[100];
	int i;
	cout<<"bir dizi girin:";
	gets(x);
	for(i=0;i<strlen(x);i++){
		x[i]=toupper(x[i]);
	}
	puts(x);
	return 0;
}
