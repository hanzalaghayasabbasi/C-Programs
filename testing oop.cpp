/*#include<iostream>
using namespace std;
// shallow copy
class king{
public:
int *a;
int *b;
	king(){
		a=new int[10];
		b=new int[10];
			}
 king(king const& c){
 	a=c.a;
 	b=c.b;
 }

};

int main(){
king c;
king d=c;
c.a[0]=99;
d.a[0]=33;
cout<<c.a[0]<<endl;
cout<<d.a[0]<<endl;
}
 */
 
#include<iostream>
using namespace std;
class king{
public:
int *a;
int *b;
king(){
}
king(king const& c){
 	a=new int[10];
 	b=new int[10];
 for(int i=0;i<10;i++){
 	a[i]=c.a[i];
	b[i]=c.b[i];
}
}
};

int main(){
king c;
king d=c;
c.a[0]=99;
d.a[0]=9;
cout<<c.a[0]<<endl;
cout<<d.a[0]<<endl;

}
 