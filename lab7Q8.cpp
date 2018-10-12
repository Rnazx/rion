//8. Write a C++ program to find sum of digits of a given number using recursion.
#include<iostream>
using namespace std;
	//define the function
int su(int n )
	{
		if (n>=1)
		{
		
		
		return n%10+su(n/10);//divide the number by 10 to get the last but one number
		
		}
	
	}
int main()//definr the main function
{
	int n;
	cout<< "Enter  a number\n";
	cin>>n;
	cout<<" The sum of the digits are "<<su(n);//call the function
	
	return 0;//return the value to 0 even though it is pointless
} 
