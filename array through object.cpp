#include<iostream>
using namespace std;

/*class king{
private:
	int f;
	public:
king(){
};
void in();
void dis();
};
void king::in(){
	cin>>f;
}
void king::dis(){
	cout<<f<<endl;
}

int main(){
	// how much you take parmter it wiil enter thatmuc
	king k[7];
//input data
for(int i=0;i<7;i++)
k[i].in();

for(int i=0;i<7;i++)
k[i].dis();

return 0;
}
	

class king{
private:
	int f,r;
	public:
king(){
};
king(int,int);
void dis();
};
king::king(int c,int d){
	f=c;
	r=d;
}
void king::dis(){
	cout<<f<<"   "<<r<<endl;
}

int main(){
	// how much you take parmter it wiil enter thatmuc
//	1 method
//king k[]={king(12,3),king(1,3),king(2,3),king(5,3)};
// 2 method
king k[]={{12,3},{1,3},{2,3},{5,3}};
//input data
for(int i=0;i<4;i++)
k[i].dis();

return 0;
}


class king{
private:
	int f,r;
	public:
king(){
};
king(int,int);
void dis();
};
king::king(int c,int d){
	f=c;
	r=d;
}
void king::dis(){
	cout<<f;
	cout<<r<<endl;
}

int main(){
	
	int n;
	cout<<"Enter number you want to enter "<<endl;
	cin>>n;
	king* a= new king[n];
	
// how much you take parmter it wiil enter thatmuc
	
//input data
// malloc() and new are used to allocate memory
// dynamicaly alloacted emmory
for(int i=0;i<4;i++)
// 1 ouput 0 and than i+1=0+1=0
a[i]=king(i,i+1);
for(int i=0;i<4;i++)
a[i].dis();

return 0;
}

*/

class king{
private:
	int f,r;
	public:
king(){
};
king(int);
void dis();
};
king::king(int c){
	f=c;
}
void king::dis(){
	cout<<f<<endl;
}

int main(){
	// how much you take parmter it wiil enter thatmuc
//	1 method
	king k[]={king(12),king(1),king(2),king(3)};
	// also wriiten as
	//	2 method
	//king k[]={12,1,2,3};
	
//input data
for(int i=0;i<4;i++)
k[i].dis();

return 0;
}

	
	