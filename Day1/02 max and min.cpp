#include<iostream>
using namespace std;
int main()
{
	
	int n1,n2,n3;
	cout<<"Enter three numbers "<<endl;
	cin>>n1>>n2>>n3;
	
	if (n1>n2 && n1>n3)
	cout<<"n1 is maximum"<<endl;
	else if(n2>n1 && n2>n3)
	cout<<"n2 is maximum"<<endl;
	else
	cout<<"n3 is maximum"<<endl;
	
	if(n1<n2 && n1<n3)
	cout<<"n1 is minimum"<<endl;
	else if(n2<n1 && n2<n3)
	cout<<"n2 is minimum"<<endl;
	else
	cout<<"n3 is minimum"<<endl;
	return 0;
}
