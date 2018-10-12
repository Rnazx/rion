//7. Write a C++ program to check whether a number is palindrome or not using recursion.
#include<iostream>
using namespace std;
	//define the function
	int rev(int n,int r )
	{
		
    // base case 
    if (n == 0)
    
        return r; 
  
    // stores the reverse of a number 
    r = (r * 10) + (n % 10); 
  
    return rev(n / 10, r); 
	
		
       //multiply by 10 powers
     	
		
		
	
	}
	int main()//define the main function
	{
		int n,r;
		cout<<"Enter the number ";
		cin>>n;
		r=rev(n,0);
		if(n==r)//writre the conditions for a number to be a palindone
		{
			cout<<"The number is a palindrone\n";
		}
		else
		{
			cout<<"The number is not a palindrone!!\n";
		}
		cout<<r;
	return 0;
	}
