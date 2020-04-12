#include<iostream>
using namespace std;

float my_div(int n1,int n2)
{
	if(n2==0)
		throw "Divide by zero";
	return n1/n2;
	
	catch(const char* exec)
	{
		cout<<"\nException : "<<exec;
	}
}

int main()
{
	int n1,n2;
	cout<<"Enter two numbers : \n";
	cin>>n1>>n2;
	float res;
	
	try{
	
	res = my_div(n1,n2);
	cout<<"\nDivision : "<<res;
		
	}
	
	// when no other exception handler type is found this generic handler is executed
	// ... is ellipsoidal operator
	catch(...)
	{
		cout<<"\nGeneric Exception Handler : ";
	}			






}
