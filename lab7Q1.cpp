//1. Write a C++ program to find power of any number using recursion.
#include<iostream>
using namespace std;
//define fun power 2 var
		int pow(int b,int p)
		{
		
			if(p>=1)
			{
				return b*pow(b,p-1);//write the recurring relation
			}
			else 
			{
				return 1;
			}
	
		}	
		int main()//define the main function
		{
				int base,power,num;
				cout<<" enter base\n";
				cin>>base;
				cout<<" enter power\n";
				cin>>power;
				num=pow(base,power);//call the function by its value
				cout<<" the number is \n"<<num;//display the number required
				return 0;
		}



