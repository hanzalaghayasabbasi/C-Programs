#include<iostream>
using namespace std;

class st{
	int a;
	int b;
public:
st(int,int);
void s();
};

st::st(int c,int d){
	a=c;
	b=d;
}
void st::s(){
	cout<<"the number is "<<a+b<<endl;
}

int main(){
	int l,m;
	cout<< " Enter two number "<<endl;
	cin>>l>>m;
st k(l,m);
k.s();
}
