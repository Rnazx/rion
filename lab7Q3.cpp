//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include<iostream>
using namespace std;
//define the function
//write the condition for printing odd 
int odd(int a,int b)
{
	if(a%2==0&&b%2==0&&a<=b)
	{
		
		a=a+2;
		cout<<a;
		odd(a,b);
	}
	else if(a%2==1&&b%2==1&&a<=b)
	{
		
		a=a+2;
		cout<<a;
		odd(a,b);
	}
	else if(a%2==1&&b%2==0&&a<=b)
	{
		
		a=a+2;
		cout<<a;
		odd(a,b);
	}
	else if(a%2==0&&b%2==1&&a<=b)
	{
		
		a=a+2;
		cout<<a;
		odd(a,b);
	}
	else
	{
		return 1;
	}
}
		
		
//write the condition for printing even
//define the main function
int main()
{
	int l,u;
	cout<<" Enter the lower limit \n";
	cin>>l;
	cout<<" Enter the upper limit \n";
	cin>>u;
	cout<<" all odd values in the interval are ";
	odd(l,u);
	return 0;
}
