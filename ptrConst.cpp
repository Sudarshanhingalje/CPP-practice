#include<iostream>
using namespace std;

int main(){
	
	int a = 10;
	
	// int * const ptr = &a; const ptr
	
//ptr++;  // error coz; ptr is const	
//	int*ptr2 = ptr+4;
//	cout<<ptr2<<endl;	

// const var -> const ptr

//const int * const ptr = &a; // const ptr const int
//ptr++;
//a++;

// const var 

//const int *ptr = &a;
//a = a+3;
//cout<<a;

//const ptr
int* const ptr = &a;
ptr++;   //error due to const ptr

	return 0;
}
