#include<iostream>
using namespace std;

int main(){
	int num,i;
	cout<<"enter a number";
	cin>>num;
	
	cout<<"Multiplication Table"<<endl;
	
	for(i=1;i<=10;i++){
		cout<<num<<"X"<<i<<"="<<num*i<<endl;
	}
	
	
		cout<<"*******************************"<<endl;
	
	
	return 0;
}
