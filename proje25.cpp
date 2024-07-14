#include <iostream>
using namespace std;

int main() {
	string meyve="elma";
	cout<<"&meyve:"<<&meyve<<endl;
	string*ptr=&meyve;
	cout<<"meyve:"<<meyve<<endl;
	cout<<"&meyve:"<<&meyve<<endl;
	cout<<"ptr:"<<ptr<<endl;
	cout<<"*ptr:"<<*ptr<<endl;
	*ptr="armut:";
	cout<<"meyve:"<<meyve<<endl;
	*ptr="armut";
	cout<<"meyve"<<meyve<<endl;
	return 0;
}
