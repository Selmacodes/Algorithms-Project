#include <iostream>
using namespace std;
int main() {
	for(int i=0;i<5;i++){
		if(i==3){
			break;
		}
		cout<<i<<endl;
	}
	int j=0;
	while(j<10){
		if(j==8){
			break;
		}
		cout<<j<<endl;
		j++;
	}
	return 0;
}
