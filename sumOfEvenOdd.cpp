#include<iostream>
using namespace std;

int main(){
	int sum_Odd = 0, sum_Even = 0,i;
	
	for(i=0;i<=20;i++){
		if(i%2==0){
			sum_Even+=i;
		}
		else{
			sum_Odd+=i;
		}
	}
	
	cout<<sum_Odd<<"\t"<<sum_Even<<endl;
	
	
	return 0;
}
