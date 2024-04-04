#include<iostream>
using namespace std;

class myDate {
	int dd,mm,yy;
	
	public:
	 void setDate(int,int,int);
	 void display();
	 void setMonth(int);
	 int getDay();
};

int main(){
	
	myDate obj1;
	obj1.setDate(18,03,2024);
	obj1.display();
	obj1.setMonth(05);
	obj1.display();
	int day = obj1.getDay();
	cout<<day<<endl;
	return 0;
}

void myDate::setDate(int d,int m,int y){
	dd = d;
	mm = m;
	yy = y;
}

void myDate::display(){
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
void myDate::setMonth(int m){
	mm = m;
}
int myDate::getDay(){
	return dd;
}
