#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
   int tutulansayi=0;
   int tahmin=0;
   time_t saniyeler;
   int tahminsay=0;
   int puan=100;
   saniyeler=time(NULL);
   srand(saniyeler);
   tutulansayi=rand()%100+1;
   while(tahmin!=-1){
   	cout<<"1 ile 100 arasinda bir sayi gir:";
   	cin>>tahmin;
   	if(tahmin==-1) break;
   	if(tahmin<1||tahmin>100){
   		cout<<"hatali giris:"<<endl;
   		continue;
	   }
	   tahminsay++;
	   if(tahmin==tutulansayi){
	   	cout<<"tebrikler toplam"<<tahminsay<<"seferde bildirdiniz\n";
	   	break;
	   }
	   else if(tahmin>tutulansayi){
	   	cout<<"daha kucuk bir tahmin yapin!\n";
	   	puan-=10;
	   }
	   else{
	   	cout<<"daha buyuk bir sayi girmelisin\n";
	   	puan-=10;
	   }
	}
	cout<<"puanin 100 üzerinden "<<puan<0 ? 0:puan;
	return 0;
}
