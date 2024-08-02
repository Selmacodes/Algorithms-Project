#include <iostream>
#include <ctime>
using namespace std;
int main() {
	time_t x;
	struct tm *zaman;
	time(&x);
	zaman=localtime(&x);
	cout<<"su anki tarih ve saat:"<<asctime(zaman);
	return 0;
}
