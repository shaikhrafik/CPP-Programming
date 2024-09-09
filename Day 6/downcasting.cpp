#include<iostream>
using namespace std;

class Parent{
	public:
		 virtual void dispaly(){
		 	cout<<"This is parent class";
		 }
};

class Child: public Parent{
	  public:
	  	  void dispaly(){
	  	  	cout<<"This is Child class";
			}
};

int main(){
	 Parent obj;
	 Child *child1;
	child1=  (Child *) &obj;
	 child1->dispaly();
	return 0;
}
