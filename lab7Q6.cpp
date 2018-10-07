//6. Write a C++ program to find reverse of any number using recursion.
#include<iostream>
using namespace std;
	//define the function
	void rev(int n )
	{
		if (n>=1)
		{
		cout<<n%10;//use the predefined remainder function
		rev(n/10);//divide the number by 10 to get the last but one number
		}
	
	}
//define the main function
    int main()
    {
        int n,r;
        cout <<" Enter the number to be reversed \n";
        cin>>n;//input the number
        cout<< "The reverse is ";
	rev(n);//call the function by its value
        return 0;
    }
         
