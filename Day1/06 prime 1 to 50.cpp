#include<iostream>
using namespace std;
int main(){
	
	for(int j=1;j <=50; j++)
	{
	bool temp =false;
	for(int i=2; i<j; i++)
	{
		if(j%i==0){
		
		temp=false;
		break;
	}
		else
		{
		  temp=true;	
		}
			if(temp==true)
        	cout<<j<<endl;
	}
}
	

	return 0;
}

