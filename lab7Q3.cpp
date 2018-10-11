
//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include<iostream>
#include<cstring>
using namespace std;
//define the function
//write the condition for printing odd 
int odd(int a,int b)
{
	if(a%2==0 && a<b)
	{	
		a++;
		cout<<a<<endl;
		return odd(a+1,b);
	}
	else if(a%2==1 && a<b)
	{	
		
		cout<<a<<endl;
		return odd(a+2,b);
	}
	else
	{
		return 1;
	}
}
//write the conditions for printing even using conditions
int even(int a,int b)
{
	if(a%2==0 && a<b)
	{	
		cout<<a<<endl;
		return even(a+2,b);
	}
	else if(a%2==1 && a<b)
	{	
		a++;
		cout<<a<<endl;
		return even(a+2,b);
	}
	else
	{
		return 1;
	}
}		
		

//define the main function
int main()
{
	int l,u,oe;
	cout<<" Enter the lower limit \n";
	cin>>l;
	cout<<" Enter the upper limit \n";
	cin>>u;
	cout<<" Do you want to print odd or even? Enter 1 for odd and 2 for even.\n";
	cin>>oe;
	if(oe==1)
	{
	cout<<" All odd values in the interval are ";
	odd(l,u);
	}
	else if(oe==2)
	{
	cout<<" All even values in the interval are ";
	even(l,u);
	}
	else
	{
	cout<<"Enter 1 or 2!!";
	}
	return 0;
}
