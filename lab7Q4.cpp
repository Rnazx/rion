//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
//define the function
int sum(int n ,int r=0)
{
	if(r<=n){
		return r+sum(n,r+1);//write the recursive relation
	}
	else
	{
		return 0;
	}
}	
//define the main function 
int main()
{
	int n,r;
	cout<<" Enter the number until which you want to find the sum \n";
	cin>> n;
	r=sum(n,r);
	cout<<"the sum is "<<r;
	
	return 0;
}
