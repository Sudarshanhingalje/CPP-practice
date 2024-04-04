#include<iostream>
using namespace std;

class Employee{
	int id;
	double sal;
	
	public:
	void setid(int i)	
	{
		id=i;
	}
		void setSal(double s)	
	{
		sal=s;
	}
	void display()
	{
	
		cout<<id<<"\t"<<sal<<endl;
	}
	
};


int main(){
	
	Employee e1,e2;
	e1.setid(89);
	e1.setSal(500000);
	cout<<"id"<<"\t"<<"sal"<<endl;
	e1.display();
	e2.setid(90);
	e2.setSal(38900.25);
	e2.display();
	return 0;
}
