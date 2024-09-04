#include<iostream>
using namespace std;
int main(){
	int n;
	bool temp =false;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(int i=2;i < n/2; i++)
	{
		if(n%i==0){
		
		temp=false;
		break;
	}
		else
		{
		  temp=true;	
		}
		
	}
	
	if(temp==true)
	cout<<"Prime";
	else
	cout<<"Not Prime";
}
