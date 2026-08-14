#include<stdio.h>

int factorial(int n);
int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    getchar();
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else                        
        return n*factorial(n-1);
}       
// This is a simple C program to find the factorial of a number using recursion.
// The program prompts the user to enter a number, then calculates and displays its factorial.
// The factorial function calls itself with a decremented value until it reaches the base case of 0.