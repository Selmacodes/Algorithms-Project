#include <iostream>
#include <string>
using namespace std;
class takim{
	string isim,mevki;
	int no;
	public:
		takim(string,string,int);
		void listele();
};
takim::takim(string i,string m,int n){
	isim=i;
	mevki=m;
	no=n;
}
void takim::listele(){
	cout<<"futbolcu ismi:"<<isim<<endl;
	cout<<"mevki:"<<mevki<<endl;
	cout<<"numarasi:"<<no<<endl;
	
}
int main() {
	takim turkiye [4]={takim("volkan demirel","kaleci",1),takim("arda turan","orta saha",10),takim("burak yilmaz","forvet",9),takim("gokhan gonul","defans",7)};
	takim *a=turkiye;
	for(int i=0;i<4;i++){
		a->listele();
		a++;
	}
	return 0;
}
