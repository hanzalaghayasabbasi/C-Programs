#include<iostream>
using namespace std;
/*
// generic programming is done using template 
// header for template
// template is used were you want to excute different data type at same time 
// if you want to use int,float,double you have to create  3 if statment but this can be easily done by template fastly
// function template
// you have to use two template such as template <typename t,typename f> if you have two differnt data member int,double etc
template <typename t>
 int comapre(t value1,t value2){
 if(value1>value2){
 	cout<<"Value 1 is greater ="<<value1<<endl; 
 }
 if(value1<value2){
 	cout<<"Value 2 is greater ="<<value2<<endl; 
 }
return 0;
}
int main(){
	comapre(32.33,32.34);
}


//explicit type
// you can used one template for one function
template <typename t>
 t get_input(){
 	t x;
 	cin>>x;
 	cout<<"x is ="<<x<<endl;
return x;
}
 
 // if you want to create new template it must have different name of function and template as shown
 template <typename s>
 s get_nput(){
 	s x;
 	cin>>x;
 	cout<<"x is ="<<x<<endl;
return x;
 }

int main(){
	int x;
	//error
	// x=get_input();
	x=get_input<int>();
	x=get_nput<int>();
	}
	
	// tempalte overloading
// use for
// similar=when two things are not entirely same
// identical=when two things are not exactly same
// different data types similar operation=function overloading
// different data types identical operation=template  overloading	
template <typename t,typename s>
 int comapre(t value1,s value2){
cout<<value1+value2;
return 0;
}
int main(){
	int i=3;
	double d=55.5;
	comapre(i,d);
}

// we can used more than one generic data typetemplate
template <typename t,typename s>
 t cat(s u){
 	
 return (t)u;	
 }
int main(){
	double d=12.333;
	// error
//	int j=cat(d);
	// solution
	int r=cat<int>(d);
	int k=cat<int,double>(d);
}
*/
// classess template
// member defination outside class
template <typename t,typename s>
 class sample{
 	t q;
 	s w;
 	public:
 	void get_data();
 	void display();
 };	
 // you want to used template after each function 
 template <typename t,typename s>
 void sample<t,s>::get_data(){
cout<<"Enter two number"<<endl;
 cin>> q >> w;
 }
 template <typename t,typename s>
 void sample<t,s>::display(){
cout<<"the number are "<<q<<" "<<w;
 }
 
int main(){
	sample<int,double> s1;
	sample<char,string> s2;
	sample<float,unsigned int> s3;
	cout<<"Enter int and double"<<endl;
	s1.get_data();
	s1.display();
	cout<<endl;
	cout<<"Enter char and string"<<endl;
	s2.get_data();
	s2.display();
	cout<<endl;
	cout<<"Enter float and unsigned int";
	s3.get_data();
	s3.display();
}