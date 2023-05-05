#include<iostream>
#include<stdlib.h> // pasue cls length
#include <regex>
#include<unistd.h>// sleep function
#include<fstream>
// regex
//#include <cstring>//getline
using namespace std;

//***************************************************************************************//
//                         HOTEL Management Program                                     //
//*************************************************************************************//

class User{
public:
int r;
User();
void User_num(long long int ID,string Cont1,string Cont2);
void User_name(string n,string f,string Oc);
void book_room(int g);
void pay();
void Payment_room();
void Display();
protected:
int store;
long long int a;
string b,c;
string fath,name,Ocupt;
};
User::User(){
	a=0;
	b="";
	c="";
	fath="";
    name="";
    Ocupt="";
}
void User::User_num(long long int ID,string Cont1,string Cont2){
	a=ID;
	b=Cont1;
	c=Cont2;
}	
void User::User_name(string n,string f,string Oc){
	fath=f;
    name=n;
    Ocupt=Oc;
}
void User::book_room(int k){
bool v;
long long int ID_num;
cout<<" First You have to Register "<<endl;
cout<<" Enter Your ID_Card Number So we  know you are Register "<<endl;
cin>>ID_num;
if(ID_num==a){
cout<<" Your ID Exist "<<endl;
sleep(2);
v=true;
}
else{
	cout<<" You have no room booked "<<endl;
	sleep(4);
}
if(v==true){
if(k==1){
cout<<"  1 room has been booked successfully "<<endl;
sleep(4);
store=k;
}	
if(k==2){
cout<<"  2 room has  been booked succefully "<<endl;
sleep(4);
store=k;
}		
if(k==3){
cout<<"  3 room has been booked succefully "<<endl;
sleep(4);
store=k;
}
}
else{
cout<<"first Register Yourself "<<endl;
sleep(2);
}
}
void User::Payment_room(){
long long int ID_numb;
bool c;
int g;
int s;
if(store!=0){
cout<<"Enter Your ID Card number which is 13 digit number"<<endl;
cin>>ID_numb;

if(a==ID_numb){
cout<<" You ID is registered "<<endl;
sleep(1);
c=true;
}
else{
int v;
system("cls");
cout<< "\t\t***********************************************************************"<<endl;
cout<< "\t\t\t*******************************************************"<<endl;
cout<< "\t\t\t\t*****************************************"<<endl;
cout<< "\t\t\t\t\t***********************\n\n"<<endl;
cout<<"\t\t\t\t\t Press 0 to exist "<<endl;
cout<<"\t\t\t\t\t Press 1 to again enter ID "<<endl;
cout<<"\t\t\t\t\t Press anyother number to go to Registration menu to Register\n\n "<<endl;
cin>>v;
if(v==0)
exit (0);
else if(v==1)
Payment_room();
else{
c=false;
system("cls");
}
}
if(c==true){
int book;
cout<<" If You book the room press 1 "<<endl;
cout<<" If You dont book a room press anyother number "<<endl;
cin>>book;
if(book==1){
cout<<"We are checking you are booked"<<endl;
sleep(2);
if(store>0 && store<=3){
store=store*50;
s=0.05*store;
cout<<" Your Payment  of room is "<<store<<"$ and including 5% tax your total amount is = "<<store+s<<endl;
}
}

else{
cout<<" You didnot booked the room! Book the room first "<<endl;

}
system("pause");
system("cls");
}

else{
int q;
system("cls");
cout<< "\t\t***********************************************************************"<<endl;
cout<< "\t\t\t*******************************************************"<<endl;
cout<< "\t\t\t\t*****************************************"<<endl;
cout<< "\t\t\t\t\t***********************\n\n"<<endl;
cout<<" \t\t\t\t\t Press 0 to exist "<<endl;
cout<<" \t\t\t\t\t Press 1 to go to book room"<<endl;
cout<<" \t\t\t\t\t Press anyother key to go to registration menu\n\n "<<endl;
cin>>q;
if(q==0)
exit(0);
else if(q==1){
int f;
cout<<" Press 1 to book Single room "<<endl;
cout<<" Press 2 to book double room "<<endl;
cout<<" Press 3 to book Triple room "<<endl;
cin>>f;
if(f==1)
book_room(f);
else if(f==2)
book_room(f);
else if(f==3)
book_room(f);
else{
while(q<=0 || q>3){
cout<<"You Enter wrong room ! ";
cout<<"Enter Again ";
cin>>f;
}
}
}
else
system("pause");
system("cls");
}
}
}
void User::Display(){
system("cls");
if(store>=51 && store<=157){
ofstream out("Booking record.txt");
int k=store;
int s;
s=0.05*k;
cout<<"\t Your  name  is          : "<<name<<endl;
cout<<"\t Your father name is     : "<<fath<<endl;
cout<<"\t Your ID-Card Number is  : "<<a<<endl;
cout<<"\t Your Contact Number is  : "<<b<<endl;
cout<<"\t Your Contact2 Number is : "<<c<<endl;
cout<<"\t Your Occupation  is     : "<<Ocupt<<endl;
// ********************* file Handling *****************
out<<"\t Your  name  is          : "<<name<<endl;
out<<"\t Your father name is     : "<<fath<<endl;
out<<"\t Your ID-Card Number is  : "<<a<<endl;
out<<"\t Your Contact Number is  : "<<b<<endl;
out<<"\t Your Contact2 Number is : "<<c<<endl;
out<<"\t Your Occupation  is     : "<<Ocupt<<endl;
if(k==50){
r=k+s;
cout<<"\t You book 1 room and amount including tax is  : "<<k+s<<endl;
out<<"\t You book 1 room and amount including tax is  : "<<r<<endl;
system("pause");
}
if(k==100){
r=k+s;
cout<<"\t You book 2 room and amount including tax is  : "<<k+s<<endl;
out<<"\t You book 2 room and amount including tax is  : "<<r<<endl;
system("pause");
}
if(k==150){
r=k+s;
cout<<"\t You book 3 room and  amount including tax is  : "<<k+s<<endl;
out<<"\t You book  3 room and amount including tax is  : "<<r<<endl;
system("pause");
}
out.close();
}
else
cout<<"\t \n\n Please fill all the information first \n\n"<<endl;

}

//                                             Admin class                          //

class Admin:public User{
long long int ID_num1;
bool c;
public:
Admin(){
}
bool delete_room();
void look_record(); // apply file handling
};
bool Admin::delete_room(){
cout<<" Enter Your ID_Card Number So we  know you are Register to delete your room  "<<endl;
cin>>ID_num1;
if(ID_num1==a){
cout<<" Your ID Exist "<<endl;
sleep(2);
c=true;
if(c==true){
cout<<" You have no room register now on "<<endl;
int v=0;
store=v;
sleep(2);
system("cls");
}
}
else{
cout<<" You are no registration iD exist first register yourself"<<endl;
sleep(2);
system("cls");
c=false;
}
return c;
}
 //  file Handling
void Admin::look_record(){
ifstream in("Booking record.txt");
in>>name;
in>>fath;
in>>a;
in>>b;
in>>c;
in>>Ocupt;
in>>r;

cout<<"\t Your  name  is          : "<<name<<endl;
cout<<"\t Your father name is     : "<<fath<<endl;
cout<<"\t Your ID-Card Number is  : "<<a<<endl;
cout<<"\t Your Contact Number is  : "<<b<<endl;
cout<<"\t Your Contact2 Number is : "<<c<<endl;
cout<<"\t Your Occupation  is     : "<<Ocupt<<endl;
cout<<"\t You book room and amount including tax is  : "<<r<<endl;
in.close();
}

int main(){
Admin j;
int start;
start:	

//      ****************************************************************************
//      ******************************* Selection **********************************
//      ****************************************************************************

cout<< "\t\t***********************************************************************"<<endl;
cout<< "\t\t\t*******************************************************"<<endl;
cout<< "\t\t\t\t*****************************************"<<endl;
cout<< "\t\t\t\t\t***********************\n\n"<<endl;
cout<<"\t\t\t\t\t\t 1 Admin login"<<endl;
cout<<"\t\t\t\t\t\t 2 User login"<<endl;
cout<<"\t\t\t\t\t\t 3 Exist\n\n"<<endl;
cin>>start;

//      *****************************************************************************
//      ******************************* Admin ***************************************
//      *****************************************************************************

if(start==1){
system("cls");
string a,b;
cout<<"\n\n\t\t\t Enter Admin User name : ";
cin>>a;
cout<<"\t\t\t Enter Admin Password   : ";
cin>>b;
if (a=="admin" && b=="admin"){
system("cls");
int admin;
do{
cout<< "\t\t***********************************************************************"<<endl;
cout<< "\t\t\t*******************************************************"<<endl;
cout<< "\t\t\t\t*****************************************"<<endl;
cout<< "\t\t\t\t\t***********************\n\n"<<endl;
cout<<"\t\t\t\t\t\t 1 Start Menu "<<endl;
cout<<"\t\t\t\t\t\t 2 delete room "<<endl;
cout<<"\t\t\t\t\t\t 3 look Record "<<endl;
cout<<"\t\t\t\t\t\t Press 0 to Exit \n\n"<<endl;
cin>>admin;
switch(admin){
case 1:{
system("cls");
goto start;
}
case 2:{
bool c=j.delete_room();
if(c==false){
system("cls");
goto start;
}
else{
break;
}
}

case 3:{
j.look_record();
system("pause");
system("cls");
break;
}
default:
cout<< "You select inappropriate choice select the Correct one "<<endl;
sleep(1);
system("cls");
break;
}
}while(admin!=0);
}
else{
cout<<" Inccorect password "<<endl;
sleep(2);
system("cls");
goto start;	
}
}
//      ****************************************************************************
//      ******************************* USER ***************************************
//      ****************************************************************************

else if(start==2){
system("cls");
int user;
do{
cout<< "\t\t***********************************************************************"<<endl;
cout<< "\t\t\t*******************************************************"<<endl;
cout<< "\t\t\t\t*****************************************"<<endl;
cout<< "\t\t\t\t\t***********************\n\n"<<endl;
cout<<"\t\t\t\t\t\t 1 Register Yourself"<<endl;
cout<<"\t\t\t\t\t\t 2 Book Room"<<endl;
cout<<"\t\t\t\t\t\t 3 Total Payment "<<endl;
cout<<"\t\t\t\t\t\t 4 Display all Your Information "<<endl;
cout<<"\t\t\t\t\t\t 5 cls "<<endl;
cout<<"\t\t\t\t\t\t 6 Start Menu "<<endl;
cout<<"\t\t\t\t\t\t Press 0 to Exit \n\n"<<endl;
cin>>user;

switch(user){
case 1:{
long long int a;
string na,f,o,b,c;
cout<<"Enter Your ID CARD Number which is 13 digit number : ";
cin>>a;
while(a>=10000000000000 || a<=999999999999){
cout<<"You enter invalid ID-Card number "<<endl;
cout<<"Enter again ";
cin>>a;
} 
cout<<"Enter First Contact number which is 11 digit number or type your country code and then Number : ";
cin>>b;
// The given argument to pattern()
    // is regular expression. With the help of
    // regular expression we can validate mobile
    // number.
// 1) Begins with 0 or 92
// 2) Then contains The first digit should contain numbers between 0 to 9.
// The rest 9 digit can contain any number between 0 to 9.
// The mobile number can have 11 digits also by including 0 at the starting.
// The mobile number can be of 12 digits also by including 91 at the starting.
    // 3) Then contains 11 digits
const regex pattern("(0|92)?[0-9][0-9]{9}"); 
  // regex_match() is used to
  // to find match between given number
  // and regular expression
while(!regex_match(b, pattern)){
cout<<"You Enter Invalid Number Enter Again or type your country code and then Number : ";
cin>>b;
}
cout<<"Enter Your Second Contact which is 11 digit number  or type your country code and then Number : ";
cin>>c;
const regex patt("(0|92)?[0-9][0-9]{9}");

while(!regex_match(c, patt)){
cout<<"You Enter Invalid Number Enter Again  or type your country code and then Number  : ";
cin>>c;
}

cout<<" Enter Your Name it must not be greater than 14 character : ";
cin.ignore(1,'\n');
getline(cin,na);
while(na.size()>=15){
cout<<"  Your Name it must not be greater than 14 character --- ";
cout<<"  Enter Again  : ";
getline(cin,na);
}
cout<<"Enter Your father Name it must not be greater than 14 character : ";
getline(cin,f);
while(f.size()>=15){
cout<<"  Your Name it must not be greater than 14 character --- ";
cout<<"  Enter Again  : ";
getline(cin,f);
}
cout<<"Enter Your Occupation it must not be greater than 9 character : ";
getline(cin,o);
while(o.size()>=10){
cout<<"  Your Occupation it must not be greater than 9 character --- ";
cout<<"  Enter Again  : ";
getline(cin,o);
}
cout<<" Your data entered successfully "<<endl;
sleep(2);
j.User_num(a,b,c);
j.User_name(na,f,o);
system("cls");
break;
}
case 2:
{
int q;
cout<<" Press 1 to book Single room "<<endl;
cout<<" Press 2 to book double room "<<endl;
cout<<" Press 3 to book Triple room "<<endl;
cin>>q;
if(q==1)
j.book_room(q);
else if(q==2)
j.book_room(q);
else if(q==3)
j.book_room(q);
else{
while(q<0 ||q>=3){
cout<<"You Enter wrong room ! ";
cout<<"Enter Again ";
cin>>q;
}
j.book_room(q);
}
system("cls");
break;
}
case 3:
{
j.Payment_room();
break;
}
case 4:{
j.Display();
	break;
}
case 5:{
system("cls");
break;
}
case 6:{
system("cls");
goto start;
	break;
}
default:
cout<< "You select inappropriate choice select the Correct one "<<endl;
sleep(1);
system("cls");
break;
}
}while(user!=0);
}

//      *****************************************************************************
//      ******************************* Exist ***************************************
//      *****************************************************************************
else if(start==3){
cout<<" You are Exist";
	return(0);
}
else{
cout<<"You Enter Invalid number Press Again"<<endl;
sleep(1);
system("cls");
goto start;
}

return 0;
}

