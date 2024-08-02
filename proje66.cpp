#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double sayi;
	cout<<"sayi girin:"<<endl;
	cin>>sayi;
	cout<<"girilen sayidan kucuk,en buyuk tamsayi:"<<
	floor(sayi)<<endl;
	cout<<"girilen sayidan buyuk,en kucuk tamsayi:"<<
	ceil(sayi)<<endl;
	return 0;
}
