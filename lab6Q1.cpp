#include <iostream>
using namespace std;          //including library

/*Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.*/

	int value(int & unitCst,int &unit,int &taxRt){
			cout<< "enter a value for the unit cost: "<<endl;
				cin>>unitCst;

			cout<< "enter a value for the unit purchase: "<<endl;
				cin>>unit;

			cout<< "Give a value for the total due: "<<endl;
				cin>>taxRt;
			                                             
			cout<< "The unit cost is: " <<unitCst <<endl;                //Return values to the user
			cout<< "The unit purchase is: " <<unit <<endl;
			cout<< "The tax rate is: " <<taxRt <<endl;
		 
	}
/*Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.*/

	int calculation(int unitCst,int unit,int taxRt, int &salesTx, int &totDue)
	{
		 value(unitCst,unit,taxRt);
		   salesTx = ( unitCst* unit* taxRt);
		totDue = ( unitCst*unit)+salesTx;
	}
	
/*Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.*/

//main function
	int main(){
		
		int unitCst,unit,taxRt,salesTx,totDue;                             //Declare variables
		calculation(unitCst,unit,taxRt,salesTx,totDue);
		//Give values
		cout<< "The sales tax is "<<salesTx<<" and "<<"the total due is "<<totDue<<endl;

		return 0;
	}
