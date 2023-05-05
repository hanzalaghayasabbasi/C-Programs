#include<iostream>
using namespace std;
// fiend function
/*
class firstf{
	int w,h;
	friend void king();
public:
	firstf(int a,int b):w(a),h(b){
	}
	void king()	
	{
		cout<<"the number is "<<w*h<<endl;
	}
};

int main(){
firstf v(12,3);
v.king();

}
*/	
/*
//friend classess
class secondpart{
public:
	private:
	int n,m;
	public:
friend class secondfr;
	secondpart(int a,int b):n(a),m(b){
	}
};

class secondfr{
	int w,h;
public:
	secondfr(int a,int b):w(a),h(b){
	}
	void king(secondpart c)	
	{
		cout<<"The number are "<<c.n*c.m<<endl;
		cout<<"the number is "<<w*h<<endl;
	}
};

int main(){
secondpart k(1,2);
secondfr r(3,1);
r.king(k);
}
	
*/
//friend function and classes
// intilize class to tell compiler that class exit so compiler allocate space for it
class thirdfr;
class thirdpart{
	private:
	int n,m;
	public:
friend void add(thirdpart,thirdfr);
	thirdpart(int a,int b):n(a),m(b){
	}
};

class thirdfr{
	int w,h;
public:
	friend void add(thirdpart,thirdfr);
	thirdfr(int a,int b):w(a),h(b){
	}
	friend void add(thirdpart c,thirdfr f){
		cout<<"the number are "<<c.n+f.w<<endl;
		cout<<"the number 2 are "<<c.m+f.h<<endl;
	}
};

int main(){
thirdpart k(1,2);
thirdfr r(3,1);
add(k,r);
}