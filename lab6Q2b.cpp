#include<iostream>
using namespace std;                 //Including Library

	//Functions with parameters and reference parameter.
	void funcR(int a, int b ,int &c){
			c=a+b;      // sum
	}

//Driver function
    int main(){	
	   int p,q,sum;                      //Declaring variables.
		                                         
		cout<< "The two numbers to give the sum: ";          //Ask the user for two numbers.
		cin>>p>>q;
		
		funcR(p,q,sum);            //Call the arguments.
		
		cout<<"sum of the numbers "<<p<< " and " << q <<" is "<<  sum << endl;             //Print the sum.
	
       return 0;
}