#include <iostream>
using namespace std;                                                                //including library
         int main(){

            int i,j,n;                                                              //initalizing variable
            cout<<"Enter the size of the pattern -"<<endl;                   //Entering size of pattern
            cin>>n;
	for (i=1;i<=n;i++)
	{                                                //conditions for the loop
		for (j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||j==n-i+1||j==i)
			cout<<'*';
			
			
			else
			cout<<' ';

    		}
		cout<<endl;
	}          
      	return 0;                                                                  //returns to 0 if code is correct
}

