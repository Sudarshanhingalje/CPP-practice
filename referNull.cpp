#include<iostream>
using namespace std;

int main(){
	// reference to int 
//	int num=10;
//	int &a=num;
//	cout<<a<<"\n";
	
	 //null referencre 
//	int *ptr = NULL;
//	//int &b = ptr;   // Compiler-error ref.pointing to NULL pointer
//	int *ptr1 = &ptr;
//	cout<<b<<"\n";
//

//refre -> refre

int num = 10;
int &b = num;
int &c = b;
cout<<num<<"\t"<<b<<"\t"<<c<<endl;
c = 100;
cout<<num<<"\t"<<b<<"\t"<<c<<endl;	
	return 0;
}
