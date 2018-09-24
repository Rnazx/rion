#include<iostream>
using namespace std;             //Including library.

//1.Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value.

int sumEvenNumbers (int firstNum, int secondNum, int sumEven) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if( n%2==0 ){
			sumEven = sumEven+n;
		}
	}
		
	return sumEven;
}



/*2.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/

  int sumOddNumbers (int firstNum, int secondNum, int sumOdd) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if( n%2!=0 ){
			sumOdd = sumOdd+n;
		}
	
	}
		
	return sumOdd;
}



/*	3.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */

int sumSquareOddNumbers (int firstNum, int secondNum, int sumSqOdd) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if( n%2!=0 ){
			sumSqOdd = sumSqOdd+n*n;
		}
	
	}
		
	return sumSqOdd;
}


/*4.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. */

int sumSquareEvenNumbers (int firstNum, int secondNum, int sumSqEven) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2==0){
			sumSqEven = sumSqEven+n*n;
		}
	
	}
		
	return sumSqEven;
}


//5.Write a main program. 

int main(){
	
	int a,b,c=0,sumEven,sumOdd,sumSqOdd,sumSqEven;    //declaring variables

		cout<< "Give two numbers be ";
		cin >>a>>b;
	
		sumEven=sumEvenNumbers(a,b,c); 
		cout<<"The sum of the even numbers: "<<sumEven<<endl;         //Tell sum
		  
		sumOdd=sumOddNumbers(a,b,c);
		cout<<"The sum of the odd numbers: "<<sumOdd<<endl;         //Tell sum
		
		sumSqOdd = sumSquareOddNumbers(a,b,c);
		cout<< "The sum of the square of the odd numbers "<< sumSqOdd<<endl;
  
		sumSqEven = sumSquareEvenNumbers(a,b,c);                          //Tell sum
		//Tell user the sum
		cout<<"The sum of the square of the even numbers: "<<sumSqEven<<endl; 
	
        		
return 0;
}
