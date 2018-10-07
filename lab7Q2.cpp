//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
	//define the function
	int nat(int n,int r=1)
	{
		if(r<n)
		{
			cout << r <<',';
			nat(n,r+1);//write the recursive relation	
		}
		else if(r==n)
		{
			cout << r <<'.';
			nat(n,r+1);//not necessary to write else statement	
		}
		
	return 0;
	}			
	//define main function
	int main()
	{
		int n;
		cout<<"Enter the number upto which you want the numbers to be displayed \n";
		cin>>n;//input the number of terms
		cout<< " the numbers are ";
		nat(n);
		return 0;
	}

