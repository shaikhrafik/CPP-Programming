
#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int employeeid;
		string name;
		int contact;
		string address;
		public:
		Employee(int id,string n,int c,string a){
			employeeid=id;
			name=n;
			contact=c;
			address=a;
		}
		
		void setEmployeeid(int id){
			employeeid=id;
		}
		
		int getEmployeeid(){
			return employeeid;
		}
		void setName(string n){
			name=n;
		}
		
		string  getName(){
			return name;
		}
		
	    void setContact(int c){
			contact=c;
		}
		
		int getContact(){
			return contact;
		}
		void setAddress(string a){
			address=a;
		}
		
		string  getAddress(){
			return address;
		}
		
		void display(){
			cout<<"Employee id "<<employeeid<<"Name "<<name<<"contact no "<<contact<<"address "<<address<<endl;
		}
};

int main(){
	Employee e(85,"abc",6789034,"iacsd");
	e.setName("Rafik");
	cout<<e.getName()<<endl;
	e.display();
	return 0;
}
