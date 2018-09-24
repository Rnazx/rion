#include<iostream>
using namespace std;                            //Including Library.

	void funcR(int a, int b ,int c){                 //Functions with parameters and reference parameter.
		if(a>b)
        {
		c = a;
		}
		else {
		c = b;
		}
	}

//Driver function
int main(){
	int p,q,max;            //Declaring variables.	
		cout<< "The two numbers to give the bigger of the two: ";       //Ask for two numbers.
		   cin>>p>>q;
		funcR(p,q,max);                             //Call the arguments.
		   cout<<"The maximum among the numbers "<<p<< " and " << q <<" is "<< max <<endl;           //Print maximum
		return 0;
}
