#include<iostream>
#include<string.h>
#include<cctype>
/*
• Are behind many overloaded operators
• Categories:
– assignment: assign, copy, data
– modification: append, clear, erase, insert, 
replace, swap
– space management: capacity, empty, 
length, resize, size
– substrings: find, substr
– comparison: compare*/
using namespace std;
// character testing
int main(){
	string word1, word2, phrase;
cin >> word1; // word1 is "Hot"
word2.assign(" Dog");
phrase.append(word1);
phrase.append(word2); // phrase has "Hot Dog"
phrase.append(" with mustard relish", 13);
 // phrase has "Hot Dog with mustard"
phrase.insert(8, "on a bun ");
cout << phrase << endl; // displays
 // "Hot Dog on a bun with mustard
		string myname("Chri");
	string verb(myname,0,1);
	//display charcter from 0 charcter to 3 charcter 
		cout<<verb;
	cout<<sizeof(int)<<endl;
int iNum;
long lNum;
double dNum;
char intChar[10];
iNum = atoi("1234"); // puts 1234 in iNum
lNum = atol("5678"); // puts 5678 in lNum
dNum = atof("35.7"); // puts 35.7 in dNum
cout<<iNum<<endl;
cout<<lNum<<endl;
cout<<dNum<<endl;

cout<<itoa(iNum, intChar,16); // puts the string

}
	// set size of string
//	int r=20;
//	char c[r];
//	cout<<"Enter a character "<<endl;
// cin.getline(c,r);
//cout<<c;
//}
/*int main(){
	char c='f';
	cout<<"Enter a character "<<endl;
cout<<c;
	cout<<"Upper case letter is "<<toupper(c)<<endl;
		cout<<"Lower case letter is "<<tolower(c)<<endl;
	
	if(isalpha(c)){
		cout<<"it is letter "<<c<<endl;
	}	
	if(isalnum(c)){
		cout<<"it is number or charter "<<c<<endl;
}
	if(isprint(c)){
		cout<<"it is a printable "<<c<<endl;
}	
	if(isupper(c)){
		cout<<"it is uppercase letter "<<c<<endl;
}	
		if(islower(c)){
		cout<<"it is  lowercase letter "<<c<<endl;
}
		if(ispunct(c)){
		cout<<"it is a punctuation "<<c<<endl;
}
		if(isspace(c)){
		cout<<"it is space letter "<<c<<endl;
}
	
return 0;
}
*/