//11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
#include<iostream>

using namespace std;
  
// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (b == 0) 
     return a;    
    return gcd(b, a % b);  
} 
  

int main() 
{ 
    int a , b ;
    cout<<" Enter the values of a and b \n";
    cin>>a>>b; 
    if(a>b)
    {
    cout<<"GCD of "<<a<< " and "<<b<<" is "<<gcd(a, b);
    }
    else  if(a<b)
    {
    cout<<"GCD of "<<a<< " and "<<b<<" is "<<gcd(b, a);
    } 
    return 0; 
} 
