#include<iostream>
//#include<stdlib.h>
#include<vector>
//Vectors lecture 7 last  using namespace std;
void dis(vector<string> &v){
     for(int i=0;i<v.size();i++){
cout << v[i]<<endl;
}
}
    

int main(){
vector<string> employees;
 
employees.push_back("michael");
employees.push_back("jim");
employees.push_back("pam");
employees.push_back("dwight");
dis(employees);
employees.pop_back();
 dis(employees);
 vector<string> :: iterator iter=employees.begin();
 employees.insert(iter,12,"566");
dis(employees);
     
 }
/*int main(){
int count;
int lowest;
int numbers[5];
numbers[4]=322;
numbers[3]=429;
lowest = 32;
for (count = 0; count < 5; count++)
{
 if (numbers[count]>lowest)
cout<<numbers[count];
}

}
int main(){

	int n;
	n=(int)pow(4,2);
	cout<<n;
	
	return 0;
}


//the difference between pass by value and pass by refrence is that  pass by refrence it copy values
// and in pass by refrence it chnage in original address
void fun(int c){
//used this for refrence void fun(int &c){
	c*=3;
	
}
// brak and countinue is used in loop or switch
int main(){
	int n=1;
cout<<"Me"<<endl;
	exit(0);
cout<<n;
return 1;	
}*/
