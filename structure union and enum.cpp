#include<iostream>
using namespace std;

//typedef struct student{
// it mean the which I called 	struct student now is called it e as shown }e;
//	int a; // 4
	// string c; //32
//	at struct it used total bytes of struct =36 bytes of memory
	
	
//}e;
typedef union stud{
// Union are like struct but they have better memory mangment
// in this one data type is used at a time
// it mean the which I called 	struct student now is called it e as shown }e;
// in union it used which number has longest bytes it one used thAt beacuse it used by any variable 
	int ac;
	float c;
//	total byte used by unioin is 32 bytes and it usdd one variable at the time
//string cannot used in Union	
}c;

int main(){
// also written as
// struct student harry
c har;
	har.ac=99;
	har.c=99.88;
enum meal{breakfast,lunch,dinner};
// mostly use din switch beacuse or for loo because they donot insert string and it give them number in 0,1..so on
// enum assign breakfast 0,lunch 1 and dinner 2
string c;
	// if we output two value it will give error in unio we can only output  one variable at time
//cout<<"number ="<<har.c;
}
