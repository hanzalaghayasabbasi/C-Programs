#include<iostream>
using namespace std;
/*
//subscript operator
class sb{
	int a,b;
public:
	sb(int c=0){
		a=c;
	}
};

class k{
sb* r;
int size;
int y;
public:
k(int m){
	size=m;
	r=new sb[size];
}
sb&  operator[](int index){
	if(index>size)
cout<<"Array out of bound "<<endl;
exit(0);
return r[index];
}
};
int main(){
k c(12);
sb t;
t=c[13];
}

// Assigment operator
// returning class.
class oper{
	int a, b;
	public:
		oper(){
		}
	oper(int d,int f);
	oper operator==(oper);
	void print();
};
oper::oper(int d,int f){
	a=d;
	b=f;
}
oper oper::operator==(oper c){
	oper m;
	m.a=c.a;
    m.b=c.b;
return m;
}
void oper::print(){
	cout<<a<<endl;
	cout<<b<<endl;
}


int main(){
oper foo(12,33);
oper bar(2,3);
oper m;
foo=bar;
foo.print();
bar.print();
}
*/
// assigment operator using void friend
class oper{
	int a, b;
	public:
		oper(){
		}
	oper(int d,int f);
	friend void operator==(oper,oper);
	void print();
};
oper::oper(int d,int f){
	a=d;
	b=f;
}
void operator==(oper c,oper m){
	c.a=m.a;
    c.b=m.b;
}
void oper::print(){
	cout<<a<<endl;
	cout<<b<<endl;
}


int main(){
oper foo(12,33);
oper bar(2,3);
oper m;
foo=bar; // foo=bar assiggment operator
foo.print();// classname foo=bar copy
bar.print();
}
