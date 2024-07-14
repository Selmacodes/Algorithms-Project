#include <iostream>

using namespace std;

int main() {
	int dizi[5]={1,3,2,5,9};
	int enbuyuk;
	for(int i =0;i<5;i++){
		if(dizi[i]>=enbuyuk){
			enbuyuk=dizi[i];
		}
	}
	cout<<"en buyuk deger:"<<enbuyuk<<endl;
	return 0;
}
