#include <iostream>
using namespace std;
int main() {
	int sayi,faktoriyel=1;
	cout<<"faktoriyel bulmak istediginiz sayiyi giriniz:";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		faktoriyel*=i;
	}
	cout<<"faktoriyel:"<<faktoriyel<<endl;
	return 0;
}
