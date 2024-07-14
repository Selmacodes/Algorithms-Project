#include <iostream>

using namespace std;

int main() {
	int gunnumarasi;
	cout<<"lutfen gun numarasini giriniz:";
	cin>>gunnumarasi;
	switch(gunnumarasi){
		case1:
			cout<<"gun pazartesi";
			break;
		case2:
			cout<<"gün sali";
			break;
		case3:
			cout<<"gun carsamba";
			break;
		case4:
			cout<<"gun persembe";
			break;
		case5:
			cout<<"gun cuma";
			break;
		case6:
			cout<<"gun cumartesi";
			break;
		case7:
			cout<<"gun pazar";
			break;
		default:
			cout<<"gercersiz gun girdiniz..."<<endl;
			break;
			
	}
	return 0;
}
