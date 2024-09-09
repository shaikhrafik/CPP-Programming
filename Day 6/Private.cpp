#include<iostream>
using namespace std;

class Emp{
    private:
	    string name;
	   int age;
	   static int counter;
	public :
	   Emp(){
	   	name="Rafik";
	   	age=24;
	   	counter++;
	   }
	   void display(){
	   	
	   	cout<<"Name of Employee "<<name<<"Employee age "<<age <<"Counter "<<counter;
	   }	
};

class CsEmp:public Emp{
//	cout<<"Child Class";
};

class CsEmp:private Emp{
//	cout<<"Child Class";
};
class CsEmp:protected Emp{
//	cout<<"Child Class";
};

int Emp::counter =0;

int main(){
	CsEmp obj;
	obj.display();
	return 0;
}
