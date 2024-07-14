#include <iostream>

using namespace std;

int main() {
	int ogrencinotu;
	cout<<"lutfen notunuzu giriniz:";
	cin>>ogrencinotu;
	if(ogrencinotu<0||ogrencinotu>100){
		cout<<"lutfen gecerli aralýklarda not giriniz!"<<endl;
	}
	else if (ogrencinotu>=70){
		cout<<"gectiniz..."<<endl;
	}
	else if(ogrencinotu<70&&ogrencinotu>=50){
		cout<<"bute kaldiniz..."<<endl;
	}
	else{
		cout<<"kaldiniz..."<<endl;
	}
	return 0;
}
