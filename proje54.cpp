#include <iostream>
using namespace std;
class yapici_yikici{
	char harf;
	int sayac;
	public:
		yapici_yikici(){
			sayac++;
			cout<<"\nyapici fonksiyon cagrildi.";
		}
		~yapici_yikici(){
			sayac--;
			cout<<"\nyikici fonksiyon cagrildi.";
		}
		int say(){
			return sayac;
		}
};
int main() {
	cout<<"\nbolum1 baslyor.\n";
	yapici_yikici nesne1,nesne2,nesne3;
	cout<<"\n\nbolum 2 basliyor.\n";
	yapici_yikici nesne4,nesne5;
	cout<<"\n\nbolum 2 bitiyor.\n";
	cout<<"\nbolum 1 bitiyor.\n";
	return 0;
}
