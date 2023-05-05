#include<iostream>
using namespace std;
/*
class sb{
int a;
public:
void k(){
		cout<<"a"<<endl;
	}
};

class ke:public sb{
int size;
public:
void k(){
	// it will not execute any of it beacuse it doesnot know what function to called
	//k();
	//solution tell compiler what to excute using scope operator
		sb::k();
	cout<<"l";
	
	
}
};
int main(){
ke c;
c.k();

}
// another example
class sb{
int a;
public:
void k(){
		cout<<"1"<<endl;
	}
};

class ke{
int size;
public:
void k(){
	cout<<"2";
}
};
class r: public sb,public ke{

};
int main(){
r c;
// it will give error becuse it doesnot know what k to called
//       eroor     c.k();
// solution
c.sb::k();
c.ke::k();
}
*/
// hybrid inhertiance type conversion
// diamond problem
class sb{
int a;
public:
void k(){
		cout<<"1"<<endl;
	}
};
class ke:public sb{
int size;
public:
void k(){
	cout<<"2";
}
};
class r:public sb{
public:
void k(){
	cout<<"3";
}
};
class f:public ke,public r{
public:
void k(){
	cout<<"4";
}
};
int main(){
f c;
r k;
c.k();
c.r::k();
c.ke::k();
// but how do call sb
k.sb::k();
}


