#include<iostream>
using namespace std;

// unary operator are which operate single operand in friend finctio and binary operator which operate two operand in freiend funtion
// unary operator=++.--.&.!.-~
// binary operator  two operand in friend functionm ++
/*
class oper{
	int a, b;
	public:
		oper(){
		}
	oper(int d,int f);
	oper operator+(oper);
	void print();
};
oper::oper(int d,int f){
	a=d;
	b=f;
}
oper oper::operator+(oper c){
	oper m;
	m.a=a+c.a;
    m.b=b+c.b;
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
m=foo+bar;
m.print();
}


// friend function

class oper{
int a, b;
public:
oper(){
		}
oper(int d,int f);
friend oper operator+(oper,oper);
void print();
};
oper::oper(int d,int f){
	a=d;
	b=f;
}
oper operator+(oper c,oper d){
	oper m;
	m.a=c.a+d.a;
    m.b=c.b+d.b;
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
m=foo+bar;
m.print();
}

//Unary opertor ++
class oper{
	int a, b;
	public:
		oper(){
		}
	oper(int d,int f);
	void  operator++();
	void print();
};

oper::oper(int d,int f){
	a=d;
	b=f;
}
// if you want to used postfix add postfix
void oper::operator++(){

++a;
++b;

}

void oper::print(){

	cout<<a<<endl;
	cout<<b<<endl;	
}

int main(){
oper foo(12,33);
++foo;
++foo;

foo.print();

}

//classes unary operator
class oper{
	int a,b;
	public:
		oper(){
		}
	oper(int d,int f);
	friend oper  operator++(oper& k);
	void print();
};
oper::oper(int d,int f){
	a=d;
	b=f;
}
// if you want to used postfix add postfix
oper operator++(oper& k){
oper temp;
temp.a=++k.a;
temp.b=++k.b;
return temp;
}

void oper::print(){

	cout<<a<<endl;
	cout<<b<<endl;	
}

int main(){
oper foo(12,33);
++foo;
++foo;

foo.print();

}*/
// subscript operator
class my{
int x,y;
public:
	my(){
	}
// istream& and ostream& 
// it allow chain output command together
// and refresence to create new object and changes made on itself
friend istream& operator>>(istream& is ,my &a){
	is>>a.x>>a.y;
	return is; 
}	
friend ostream& operator<<(ostream& os ,my& a){
	os<<a.x<<"  "<<a.y<<endl;
return os; 
}
};
int main(){
my c;
my d;
cin>>c;
cout<<" c and d = "<<c<<endl;
}