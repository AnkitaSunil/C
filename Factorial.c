#include<stdio.h>
#include<conio.h>

void main()
 {
   int x=0,n=0;
   int fact();

   printf("\n\nEnter the number to find factorial: ");
   scanf("%d", &n);

   x=fact(n);

   printf("\nThe factorial of %d is %d!\n",n,x);
 }

int fact(int n)
 {
   if(n==0)
    return 1;

   else
    return n*fact(n-1);
 }