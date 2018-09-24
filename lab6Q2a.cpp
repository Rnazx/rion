
#include<iostream>
using namespace std;              //including library

	//Write a function that has two parameters.
	int func(int a, int b){
		int sum = a + b;           //their sum.
		return sum;
	}

//Driver function
	int main(){
		int c,d;  //Declaring variables                                                        
			cout<< "Give two numbers be "; //Ask the user for two numbers.
			cin >>c >>d;
			   //Tell user the sum
			cout<<"The sum of the numbers "<<c<< " and " <<d<<" is "<< 
			//Call function for numbers as arguments
		    func(c,d) <<endl;
		
return 0;
}
