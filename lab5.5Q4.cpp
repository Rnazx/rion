#include<iostream>
using namespace std;
/*     ****
      ****
     ****
    ****
*/
int main()
{
	int n;                                                              //initalizing variable
	cout<<"Enter the size of the pattern -"<<endl;
    cin>>n;       
    //loop to indicate the row number
    for(int i=1;i<=n;i++)
    {               
		//print spaces
		for(int j=1;j<=(n-i);j++)
		{
		    cout<<" ";
		}
		//print stars
		for(int k=1;k<=(n);k++)
		{
		    cout<<"*";
		}
        cout<<endl;
		
		//print spaces
		/*for(int l=1;l<=(i-1);l++)
		{
		    cout<<" ";
		}
		cout<<endl;*/
    } 
   
    //return statement
    return 0;
}
