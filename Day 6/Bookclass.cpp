#include<iostream>
using namespace std;

class Book{
	public:
	int bookid;
	string name;
	string author;
	float price;
	
	public:
	    /*
		 Book( int bookId, string name, string autherName, float price ){
		 	
		 	this->bookId= bookId;
		 	this->name=name;
		 	this->autherName=autherName;
		 	this->price=price;
		 	
		 }
		 */
		 
		 void dispaly(){
		 	cout<<"Book Sell \n"<<"Book Id \n"<< bookid<<
		 	"Book Name \n"<<name<< "auther name \n"<<author<<"Price book \n"<<price<<endl;
		 }
		 
};


int main(){

	int bookid;
	string name;
	string author;
	float price;
	
	Book b[3];
	for(int i=0;i<3;i++){
		cout<<"Enter book id"<<endl;
		cin>>bookid;
		cout<<"Enter book name"<<endl;
		cin>>name;
		cout<<"Enter book author"<<endl;
		cin>>author;
		cout<<"Enter price"<<endl;
		cin>>price;
	}
	
		for(int i=0;i<3;i++){
		cout<<"Book id"<<b[i].bookid<<endl;
		
		cout<<"book name"<<b[i].name<<endl;
		
		cout<<"book author"<<b[i].author<<endl;
		
		cout<<"price"<<b[i].price<<endl;
		
	}
	 
	return 0;
}
