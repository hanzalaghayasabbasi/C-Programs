#include<iostream>
using namespace std;
class fun{
	int r;
public:
fun(){
	r=0;
}
void read(int h){
		r=h;
}
bool operator>(fun k){
if(r>k.r)
return true;
else 
return false;	
}
void dispaly(){
cout<<"salary"<<r<<endl;
}
};	


int main(){
fun c,d;
c.read(33);
d.read(44);
if(c>d)
c.dispaly();
else
d.dispaly();
}






