#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
	int karakteradeti;
	cout<<"lutfen kac karakter uretmek istediginizi giriniz:";
	cin>>karakteradeti;
	cout<<endl;
	srand(time(NULL));
	for(int i=0;i<karakteradeti;i++){
		int randomkarakter=rand()%65+26;
		cout<<char(randomkarakter)<<endl;
	}
	
	return 0;
}
