#include<iostream>
using namespace std;

class Employee{
	
	int emp_id,dept_id;
	string name;
	double salary;
	
	public:
		
		Employee(){
			
			emp_id = 10;
			dept_id = 2;
			name = "Rafik";
			salary = 20000.00;
	}
		
		Employee(int emp_id,int dept_it,string name,double salary){
			
			this-> emp_id = emp_id;
			this-> dept_id = dept_id;
			this-> name = name;
			this-> salary = salary;
		}
		
		void computeNet()
		{
			cout<<"Employee Net Salary:"<<salary<<endl;
		}
	
};

class Manager{
	
	int m_id,dept_id;
	string name;
	double salary,pb;
	
	public:
		
		Manager(){
			
			m_id = 10;
			dept_id = 2;
			name = "Rafik";
			salary = 20000.00;
			pb = 20000.00;
	}
		
		Manager(int m_id,int dept_id,string name,double salary,double pb ){
			
			this-> m_id = m_id;
			this-> dept_id = dept_id;
			this-> name = name;
			this-> salary = salary;
			this-> pb = pb;
		}
		
		void computeNet()
		{
			salary = salary + pb;
			cout<<"Manager Net Salary:"<<salary<<endl;
		}
	
};

class Worker{
	
	int w_id,dept_id;
	string name;
	double basic,hoursWorked,hourlyRate,salary;
	
	public:
	
	Worker(){
		
		w_id = 100;
		dept_id = 3;
		name ="Rafik";
		basic = 100.00;
		hoursWorked = 8.00;
		hourlyRate = 100.00;
	}
	
	Worker(int w_id,int dept_id,string name,double basic,double hoursWorked,double hourlyRate){
		
		this -> w_id = w_id;
		this -> dept_id = dept_id;
		this -> name = name;
		this -> basic = basic;
		this -> hoursWorked = hoursWorked;
		this -> hourlyRate = hourlyRate;
	}
	
	void computeNet(){
		
		salary = basic + (hoursWorked * hourlyRate);
		cout<<"Worker Net Salary:"<<salary<<endl;
	}
};

int main()
{

	Employee e1(11,3,"Rafik",30000.00);
	e1.computeNet();
	
	Manager m1(1,2,"Rafik",50000.00,20000.00);
	m1.computeNet();
	
	Worker w1(100,3,"Rafik",100.00,8.00,100.00);
	w1.computeNet();
	
}
