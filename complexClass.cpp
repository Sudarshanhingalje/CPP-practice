#include<iostream>
using namespace std;

class Complex{
	int real,img;
	
	public:
		void setComplex(int r,int i){
			real = r;
			img = i;
		}
	void display(){
		cout<<real<<"+"<<img<<"i"<<endl;
	}	
	void setReal(int r){
		real = r;
	}
	void setImg(int i){
		img = i;
	}
	int getImg(){
		return img;
	}
	int getReal(){
		return real;
	}
};


int main(){
	
	Complex obj;
	
	obj.setComplex(2,5);
	obj.display();
	obj.setImg(9);
	obj.setReal(11);
	obj.display();
	obj.getReal();
	obj.getImg();
	
	
	
	return 0;
}
