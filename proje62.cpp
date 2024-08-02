#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char string1[]="kodlab";
	char string2[]="kodlab yayincilik";
	char string3[20];
	strncat(string1,string2,6);
	string1[13]='\0';
	puts(string1);
	strncpy(string3,string2,6);
	string3[6]='\0';
	puts(string3);
	
	return 0;
}
