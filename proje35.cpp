#include <iostream>
using namespace std;
int faktoriyel(int sayi){
	if(sayi==1){return sayi;}
	return faktoriyel(sayi-1)*sayi;
	
}
int fibonacci(int adim){
	if(adim==0){return 0;}
	if(adim==1){return 1;}
	if(adim==2){return 1;}
	return fibonacci(adim-1)+(adim-2);
	
	}
int main() {
	cout<<faktoriyel(5)<<endl;
	cout<<fibonacci(3)<<endl;
	return 0;
} 
