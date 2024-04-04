#include<iostream>
using namespace std;

int main(){
	
	int i=1,j;
	
	for(i;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
