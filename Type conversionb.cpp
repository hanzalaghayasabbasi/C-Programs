#include<iostream>
using namespace std;
/*
//type  Coversion

// 1 Conversion from any other type to currrent type
// 2 Conversion from current type to any other type

//1 Conversion from any other type to currrent type
// using Constructor
class fat{
int c;
public:
fat(int k);
};
fat::fat(int k){
	c=k;
}
// not decleared in class define outside the class
void fun(fat n){
	cout<<"number is = "<<endl;
}
int main(){
int k=77;
fun(k);

}
*/
// using operator
//2 Conversion from current type to any other type

class fat{
double c;
public:
fat(double k);
operator int();
};
fat::fat(double k){
	c=k;
	cout<<k<<endl;
}
// not decleared in class define outside the class
fat::operator int(){
	
	return c;
}
int main(){
fat c(12.555);
int x=c;
 cout<<x;
}
