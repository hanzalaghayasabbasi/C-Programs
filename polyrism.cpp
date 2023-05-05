#include<iostream>
using namespace std;
// destructror and function
// constrructor and data memebers cannot be virtual
// polyrism
/*
class par{
	int a=9;
	public:
	virtual void fun();
};
void par::fun(){
	cout<<"the value is = "<<a<<endl;
}
class pr:public par{
	int a=3;
	public:
	virtual void fun();
};
void pr::fun(){
	cout<<"the value is = "<<a<<endl;
}
int main(){
par* c;
par k;
pr f;
// running pr
c=&f;
c->fun();
// running par
c=&k;
c->fun();
}
*/
// using switch statement polyrism
class par{
	int a=9;
	public:
	virtual void fun();
};
void par::fun(){
	cout<<"the value is = "<<a<<endl;
}
class pr:public par{
	int a=8;
	public:
	virtual void fun();
};
void pr::fun(){
	cout<<"the value is = "<<a<<endl;
}
class k:public par{
	int a=4;
	public:
	virtual void fun();
};
void k::fun(){
	cout<<"the value is = "<<a<<endl;
}
int main(){
par* c;
int r;
cout<<"**********************press 0 for par 1 for pr 2 for k******************"<<endl;
cout<<"Enter your choice "<<endl;
cin>>r;
switch(r)
{
	case 0: c= new par; break;
	case 1:c= new pr; break;
	case 2:c= new k; break;
}
c->fun();
delete c;
}