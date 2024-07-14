#include <iostream>
#include <string>
using namespace std;
class film{
	string film_adi,oyuncu_adi;
	public:
		film(string f,string o){
			this->film_adi=f;
			this->oyuncu_adi=o;
		}
		string yaz(){
			return this->film_adi+this->oyuncu_adi;
		}
		void goster(){
			string a;
			a=this->yaz();
			cout<<a;
		}
	
};
int main() {
	film nesne ("selvi boylum al yazmalim","\n turkan soray\n");
	nesne.goster();
	return 0;
}
