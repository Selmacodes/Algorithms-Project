#include <iostream>
using namespace std;
struct ogrenci{
	int numara;
	string ad;
	string okul;

int getnumara(){
	return numara;

}
};
int main() {
	ogrenci ogrenci1={123,"sefa,","sau"};
	ogrenci ogrenci2;
	ogrenci2.ad="aleyna";
	ogrenci2.numara=1;
	ogrenci2.okul="sau";
	cout<<ogrenci1.ad;
	
	return 0;
}
