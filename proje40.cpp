#include <iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream dosya("deneme.txt");
	dosya<<"ali ata bak"<<"\n"<<"sefa eve gelme"<<"\n"<<"sefa  git";
	dosya.close();
	string metin;
	ifstream dosya1("deneme.txt");
	while(getline(dosya1,metin,'*')){
		cout<<metin<<endl;
	}
	return 0;
}
