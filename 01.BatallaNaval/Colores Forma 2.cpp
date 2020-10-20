#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | BACKGROUND_INTENSITY);
	cout<<"Tocino"<<endl;
	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_BLUE);	
	cout<<"Tutoriales";
	
	cin.get();
	
return 0;

}

