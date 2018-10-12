//10. Write a C++ program to generate nth Fibonacci term using recursion.
#include<iostream>
using namespace std;
int fib(int n)
{					//define the function
	if(n!=1&&n!=2)
	{
		return fib(n-1)+fib(n-2);
	}
	else if (n==2||n==1)
	{
		return 1;
	}
}
int main()
{
	int n;
	cout<<"Enter the value of n:\n";
	cin>>n;
	cout<< " The fibonacci sequence upto n terms is:"<<fib(n);
	
	return 0;
}
