#include <iostream>
using namespace std;
class personel{
	int yas;
	public:
	void gir(int yas){
		yas=yas;
	}
	void yasyaz(){
		cout<<yas;
	}
}a;
int main() {
	int x;
	cout<<"personelin yasini giriniz:";
	cin>>x;
	a.gir(x);
	cout<<"personelin yasi:";
	a.yasyaz();
	cout<<endl;
	return 0;
}
