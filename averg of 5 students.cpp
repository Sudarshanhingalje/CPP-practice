#include<iostream>
int main()
{
	int student, m1, m2, m3, m4, m5, sum;
	float avg;
	for (student = 1; student <= 5; student++)
	{
		cout<<enter 5 marks\n<<
		cin>>&m1>>&M2>>&m3>>&m4>>&m5>>endl;
		sum = m1 + m2 + m3 + m4 + m5;
		avg = (float)sum / 5;
		cout<<"average of student is\n"<<student<<avg);
	}
}

