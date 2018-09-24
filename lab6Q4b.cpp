#include <iostream>                 //including library.
using namespace std;

	void funcR(int a, int b, int &c){                      //Functions with parameters and reference parameter.
    	if (a<b){	
        c = a;
    	}
    	else {
        c = b;
		}
	}

//Driver function
int main(){   
	int p,q,m;            //Declaring variables. 
    	cout << "Give the two numbers to get the lesser of them " ;     //Ask the terminal for two numbers.
    	 cin>>p>>q;
    	funcR(p,q,m);               //call the arguments.
   	 	 cout<<"The minimum of the two numbers " <<p <<" and " <<q <<" is " <<m<<endl;            //Print the minimum
    	
return 0;
} 
