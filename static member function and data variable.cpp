#include<iostream>
using namespace std;
class king{
public:
private:
	int f;
private:
	public:
king(){
}
king(int);
void dis();
};
king::king(int c):f(c){
}
void king::dis(){
	cout<<f<<endl;
}
int main(){
	king k[2]={(1,2),(3,4)};
for(int i=0;i<5;i++)
k[i].dis();

return 0;
}
	

	
	