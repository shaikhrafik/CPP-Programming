#include<iostream>
using namespace std;

class Box{
	public:
	   static int count;
		int num=5;
		
		Box(){
			//this->cocount++;
			//this->num=num;
			num++;
			count++;
			cout<<"NUM"<<num<<endl;
			cout<<"Count"<<count<<endl;
	  }
	   
};

int Box::count=3;


int main(){
    Box b;
    //b.display();
    Box b1;
    //b1.display();
    
	return 0;
}
