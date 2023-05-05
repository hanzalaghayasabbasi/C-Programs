#include<iostream>
using namespace std;

//Inheritance 

class father{
int a;
public:
father(int c);
~father();
};

father::father(int c){
		
		cout<<"love"<<c<<endl;
	
}
father::~father(){
	cout<<" father Destructor is excuted"<<endl;
}
	
class son:public father{
	int n;
public:
// thsi will not work because
//son(){
//cout<<"don"<<endl;
//}
// the base class or parent class intilizer aree exeuted first
son(int f,int l):n(l),father(f){
cout<<"don"<<n<<endl;
}
//destructer are called adutomatically in reverse order
// first child class destructer is executed thand parent class des..
~son(){
	cout<<"son Destructor are excuted"<<endl;
}
	
};

int main(){
son s(12,3);
}
