#include<stdio.h>

int gcd(int a,int b)
 {
   if(b==0)
    return a;
   else
    return gcd(b,a%b);
 }

void main()
 {
   int a,b,c;

   printf("\n Please enter the 1st number: ");
   scanf("%d",&a);

   printf("\n Please enter the 2nd number: ");
   scanf("%d",&b);

   c=gcd(a,b);

   printf("\n GCD of %d & %d is %d",a,b,c);
 }
