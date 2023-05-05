#include<iostream>
using namespace std;
/*
// copy constructor
 class parent{
 	int* n;
public:
	parent(int a){
		n=new int;
		*n=a;
	}
	

	int get_num(){
	return *n;
	}
	parent(const parent& a){//deep copy
		n=new int;
		*n=*a.n;
	}
 };
 
 
class child:public parent{
 	int* num;
public:
	child(int c=0,int d=0):parent(d){//shallow copy
		num=new int;
		*num=c;
	}
	void  print(){
	cout<<get_num()<<endl;
	cout<<*num<<endl;
	} 

 };

int main(){
child obj(12,3);
child obj2=obj; //shallow copy
obj.print();
obj2.print();
}

// deep copy
class parent{
 	int* n;
public:
	parent(int a=0){
		n=new int;
		*n=a;
	}
	
	parent(const parent& a){//deep copy
		n=new int;
		*n=*a.n;
	}
	
	int get_num(){
	return *n;
	}

 };
 
 
class child:public parent{
 	int* num;
public:
	child(int c=0,int d=0):parent(d){//shallow copy
		num=new int;
		*num=c;
	}
	void  print(){
	cout<<get_num()<<endl;
	cout<<*num<<endl;
	} 
child(const child& a):parent(a){//deep copy
		num=new int;
		*num=*a.num;
}
 };

int main(){
child obj(12,3);
child obj2=obj; //deep copy
obj.print();
obj2.print();
}
*/
// Assigment opertare
class parent{
 	int* n;
public:
	parent(int a=0){
		n=new int;
		*n=a;
	}
	
	parent& operator=(const parent& a){
		n=new int;
		*n=*a.n;
 return *this;
	}
	
	
	int get_num(){
	return *n;
	}

 };
 
 
class child:public parent{
 	int* num;
public:
	child(int c=0,int d=0):parent(d){
		num=new int;
		*num=c;
	}
	
child& operator=(const child& a){//assigment
		parent::operator=(a);
		num=new int;
		*num=*a.num;
return *this;
}
	void  print(){
	cout<<get_num()<<endl;
	cout<<*num<<endl;
	} 
 };

int main(){
child obj(12,3);
child obj2;
obj2=obj; //assigmet
obj.print();
obj2.print();
}
