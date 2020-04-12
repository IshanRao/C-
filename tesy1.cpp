#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"Enter two numbers : \n";
	cin>>n1>>n2;
	
	try{
	
	if(n2==0)
		throw "Divide by zero";	// throw is compulsory in C++ but it i not required in Javascript
	else
		cout<<"\nResult : "<<n1/n2;
		
	}
	catch(const char* exec)
	{
		cout<<"\nException : "<<exec;
	}
	// when no other exception handler type is found this generic handler is executed
	// ... is ellipsoidal operator
	catch(...)
	{
		cout<<"\nGeneric Exception Handler : ";
	}			






}
