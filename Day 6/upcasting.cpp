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
	 Parent *obj;
	 Child child1;
	 obj= &child1;
	 obj->dispaly();
	return 0;
}
