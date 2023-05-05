#include<iostream>
using namespace std;
//aggregation
/*
class queen{
public:
	int r=99;
};

class king{
public:
	int f;
void fun();
void s();
queen c;
};
void king::fun(){
cin>>f;
}
void king::s(){
cout<<f<<endl;
cout<<c.r;
//static member function cannot access non static variable
//error cannot access non static variable
//cout<<f++;
}
int main(){
king v;
v.fun();
v.s();

}
	
*/
class queen{
public:
	int r;
	queen(int k);
};
queen::queen(int k):r(k){
}
class king{
public:
	int f;
king(int,queen*);
void s();
queen* m;
};
king::king(int r,queen* w){
f=r;
m=w;
}
void king::s(){
cout<<f<<endl;
cout<<m->r;
//static member function cannot access non static variable
//error cannot access non static variable
//cout<<f++;
}
int main(){
queen r(12);
king v(36,&r);
v.s();


}
	
		