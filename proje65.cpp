#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int secim;
	double i,j;
	cout<<"islem secin:"<<endl;
	cout<<"1.karekok"<<endl;
	cout<<"2.us alma"<<endl;
	cout<<"3.e tabaninda logaritma:"<<endl;
	cout<<"4.10 tabaninda logaritma:"<<endl;
	cin>>secim;
	if(secim==1){
		cout<<"karekoku alinacak sayiyi girin:";
		cin>>i;
		cout<<sqrt(i)<<endl;
	}
	else if(secim==2){
		cout<<"taban girin:";
		cin>>i;
		cout<<"us girin:";
		cin>>j;
		cout<<pow(i,j)<<endl;
	}
	else if(secim==3){
		cout<<"sayiyi girin:";
		cin>>i;
		cout<<log(i)<<endl;
	}
	else if(secim==4){
		cout<<"sayiyi girin:";
		cin>>i;
		cout<<log10(i)<<endl;
	}
	else cout<<"hatali secim!!";
	return 0;
}
