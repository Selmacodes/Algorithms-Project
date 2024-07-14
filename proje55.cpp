#include <iostream>
using namespace std;
class nesnedizisi{
	int sayi;
	public:
		void degeral(int x){
			sayi=x;
		}
		int degeroku(){
			return sayi;
		}
}nesne[10];
int main() {
	int i=0,k;
	while(i<10){
		cout<<i+1<<". degeri giriniz:";
		cin>>k;
		nesne[i].degeral(k);
		i++;
	}
	for(i=0;i<9;i++)
     cout<< nesne[i].degeroku()<<endl;
	return 0;
}
