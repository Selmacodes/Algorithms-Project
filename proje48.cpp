#include <iostream>
using namespace std;
class test{
	int a;
	public:
		test();
	    ~test();
		void goruntule();
}x;
test::test(){
	cout<<"yapici fonksiyon calisti.\n";
	a=5;
}
test::~test(){
	cout<<"gorev bitti,yokediliyor.\n";
}
void test::goruntule(){
	cout<<"a degeri:"<<a<<endl;
}
int main() {
	x.goruntule();
	return 0;
}
