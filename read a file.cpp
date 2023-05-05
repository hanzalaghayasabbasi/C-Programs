#include  <iostream>
#include  <string>
#include <fstream>
using namespace std;
// file handling is used to store data permenately in harddisk
// while normally c++ doesnot store data permenately
// ifstream  is used to is used to read
// ofstream is used to write
//fstream is used for both read and write
//       Methods
// 1 using constructor of function for only one file managment
// 2 using Member function open() of class multiple file mangment
int main() {
ifstream inputf;
string name;
int num;
cout<<"enter a file name"<<endl;
cin>>name;
// 2 Method
// inputf is member function as you can see because it come from ifstream
inputf.open(name,ios::binary);

if(inputf){

while(inputf>>num){
	cout<<num<<endl;
}
inputf.close();
}
else
{
	cout<<"Error"<<endl;
}

return 0;
}
/*
// so if you want to create another file you can used same member function name inputf to Create another file
// such as
//string s;
//cin>>s
// such as
string na;
string sa;
cout<<"enter a file name"<<endl;
cin>>na;
// asshow same memberfunction is used inputf
inputf.open(na.c_str());

if(inputf){

while(inputf>>sa){
	cout<<sa<<endl;
}
inputf.close();
}
else
{
	cout<<"Error"<<endl;
}
return 0;
}
/*
// 1 method
using namespace std;
int main(){
	
	//using constructor
	string c;
	// constructor parametrize
	
  ifstream s("k.txt");
	if(s){
	// input in string c 	
	while(s>>c){
		cout<<c<<endl;
	}
}
	else{
		cout<<"Error"<<endl;
	}
s.close();

// Now if you want to create new file you cannot used same constructor name such as
//	ifstream k("filename")
//you cannot used same constructor name again but you can used same member function name again to read file
	// so constructor is used to read only one file
	// such as
// differnet string name
		string f;
	// constructor parametrize
	// differnt constructor name
  ifstream l("k.txt");
	if(l){
	// input in string c 	
	while(l>>f){
		cout<<f<<endl;
	}
}
	else{
		cout<<"Error"<<endl;
	}
s.close();
return 0;
}*/