#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
//reading and writing
int main(){
// using member function
string u;
string p;
int r;
cout<<"Enter file name "<<endl;
getline(cin,u);
ofstream f;
f.open(u);
cout<<"Enter product name ";
cin>>p;
cout<<"Enter it cost ";
cin>>r;
cout<<" produtc is "<<p<<"\n";
cout<<"Cost is "<<r;
f<<" produtc is "<<p<<"\n";
f<<"Cost is "<<r;
f.close();

ifstream s;
s.open(u);
s>>p;
s>>r;
s.close();

return 0;
}