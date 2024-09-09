#include<iostream>
using namespace std;
class parent1{
	string name;
public:	void display
	(){
		cout<<"parent 1";
	}
};

class parent2{
	public:void display1(){cout<<"parent2";
	}
};

class child:public parent1,public parent2{
	public:child(){
		cout<<"this isn child";
	}
};
int main(){
	child c1;
	c1.display();
	c1.display1();
	return 0;
}
