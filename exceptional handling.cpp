#include<iostream>
using namespace std;
//there are three types of errror
//1 syntax error(for example,inte c)in syntax error your syntax is wrong and compiler will generate error
//2 logical erro(if(a>b))logical error is when syntax is correct but you donotbgfet result that you are expect
//3 runtime error(array out of bound) to correct this we used exception handling 1try,throw catch
// exceptional handling
/*
int main(){
	int a,b;
	cout<<"Enter two number "<<endl;
	cin>>a>>b;
//	int x=a/(a-b);
//the above expression is wrriten as mention to find the exception
int x=a-b;
//	there might be chance of exception when a=10 b=10 x=10/(10-10);this is exception (x=10/0) no output
//solution
try
{
if(x!=0){
	cout<<" result "<<a/a-b;
}

else{
	throw(x);
}
}
//catching
catch(int i){
	cout<<"\n zero "<<endl;
}	
	return 0;
}

// multiple  catch exceptional handling
// if multiple catch block statment used than the condition matches at first will excute it
void test(int x){
try
{
if(x>0){
	throw x;
}
//if x>0 it will throw use character than catch it
else{
	throw 'x';
}

}
catch(int i){
	cout<<"number int = "<<i<<endl;
}
catch(char c){
	cout<<"character"<<c<<endl;
}
}
int main(){
	int a=0;
	test(a);
	return 0;
}*/

//rethrowing
// if we use exceptionla handler than catch wil rethrow without excuting it
void test(int x){
try
{
	throw x;
}
//rethrowing
// catch will rethrow it and you have to catch it outside try and used another try to catch it
catch(int i){
throw i;
}
}
int main(){
	int x=10;
//if you donot apply these try statment it will give error teminatio
try{
// this will throw i which inside test and then catch will catch it
		test(x);
	}
catch(int i){
		cout<<i<<endl;
}
	return 0;
}