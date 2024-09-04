// Accepting the Character from the User and Changing it to Uppercase without using Inbuilt Function

#include<iostream>
using namespace std;
int main(){
	char ch;
	
	cout<<"Enter the Character:";
	cin>>ch;
	if(ch>=65 && ch<=90){
		ch=ch+32;
	    cout<<ch;
	} else if(ch>=97 && ch<=122){
		ch =ch -32;
		cout<<ch;
	}
		
		//	cout<<"The Lowercase Character is"<<(char) ch;


	//	cout<<"Entered Character is "<<ch;
//
//	asci=ch-32;
//	cout<<asci;
//	cout<<"The Lowercase Character is"<<(char)asci;
	
	
	
	
}
