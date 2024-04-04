#include<iostream>
using namespace std;

 int main(){
int fact = 1,i,num;

cout<<"Enter a number"<<endl;
cin>>num;
for(i=1;i<=num;i++){
	fact*=i;
}	
	cout<<fact;
	
	
return 0;	
}
