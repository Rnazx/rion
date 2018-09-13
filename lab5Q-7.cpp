#include <iostream>                                  
using namespace std;                           //to check whether a number is a palindrome or not
int main()
{
     int n, num, d, rev = 0;                    //declare variables
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         d = num % 10;                          //conditions
         rev =(rev*10)+ d;
         num =num/10;
     } while(num != 0);
     cout << " The reverse of the number is: "<<rev<<endl;
     if(n==rev)
     cout <<"The number is a palindrome";
     else
     cout <<"The number is not a palindrome";
    return 0;                        //return value 0
}
