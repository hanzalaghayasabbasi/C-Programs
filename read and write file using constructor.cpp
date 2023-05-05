#include<iostream>
#include<fstream>
using namespace std;
int main() {
// writing and reading
char name[20];
int r;
// using constructer
// write in file if data file exist it write in it otherwise it create a file  
// writing
//ofstream out("data.txt");
//cout<<"Enter the name of item ";
//cin>>name;
//cout<<"Enter it cost ";
//// r=cost
//cin>>r;
//
//
//out.close();
//reading
ifstream inf("data.txt");

inf>>name;
inf>>r;

cout<<"Name is = "<<name<<"\n";
cout<<"Cost is = "<<r<<"\n";


inf.close();
return 0;

}