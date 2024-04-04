#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int temp;
	temp = a;
	a = b;  
	b = temp;      
}

int main(){
int num1,num2;
cout<<"enter value"<<endl;
cin>>num1>>num2;
cout<<"Before Swap"<<endl;
cout<<num1<<"\t"<<num2<<endl;	
	swap(num1,num2);
	cout<<"After Swap"<<endl;
	cout<<num1<<"\t"<<num2<<endl;	
	return 0;
}
