#include <iostream>
using namespace std;
class hayvan{
	public:
	hayvan(){
		
	}
	virtual string konus(){
		return "konusamiyorum";
	}
};
class kedi:public hayvan{
	public:
		kedi(){
			
		}
		string konus()override{
			return"miyav";
		}
};
class inek:public hayvan{
	public:
	inek(){
		
	}
	string konus()override{
	return"mooo";
	}
};
int main() {
	hayvan hayvan;
	kedi kedi;
	inek inek;
	cout<<"hayvan:"<<hayvan.konus()<<endl;
	cout<<"kedi:"<<kedi.konus()<<endl;
	cout<<"inek:"<<inek.konus()<<endl;
	return 0;
}
