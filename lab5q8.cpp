#include <iostream>                                  
using namespace std;                           //adding library
int main()
{
     int n, num, digit, rev = 0;                    //declaring variables
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         digit = num % 10;                          //conditions
         rev =(rev*10)+ digit;
         num =num/10;
     } while(num != 0);
     cout << " The reverse of the number is: "<<rev<<endl;
     if(n==rev)
     cout <<"The number is a palindrome";
     else
     cout <<"The number is not a palindrome";
    return 0;                        //checks code is correct and return value 0
}