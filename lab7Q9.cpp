//9. Write a C++ program to find factorial of any number using recursion.

#include <iostream>
using namespace std;

int fac(int n) 
{
    if (n > 1) 
    {
        return n*fac(n-1);
    }
    else 
    {
        return 1;
    }
}

int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin >> n;
    cout << "Factorial of " << n <<" is " << fac(n);
    return 0;
}


