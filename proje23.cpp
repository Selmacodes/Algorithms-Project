#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() {
	int rastgelesayi;
	srand(time(NULL));
	rastgelesayi=rand()%100;
	cout<<"rastgelesayi:"<<rastgelesayi<<endl;
	return 0;
}
