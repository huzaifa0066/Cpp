#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Input Allphabet:";
	cin>>ch;
	switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
			cout<<"Vowel";
			break;
		default:
			cout<<"consonant";
		
		
	}
}