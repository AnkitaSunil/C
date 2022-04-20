#include<stdio.h>

int a[100],n=0,s=0,i=0;

int lin(int a[],int s,int n,int i)
 {
   if(s==a[i])
    return i;

   else if(i==n)
    return n;
    
   else 
    {
      i++;
      lin(a,s,n,i);
    }
 }

void main()
 {
   printf("\n Please enter the number of elements: ");
   scanf("%d", &n);

   printf("\n Please enter the elements: ");
   for(i=0;i<n;i++)
    scanf("%d", &a[i]);

   printf("\n Please enter the element to be searched: ");
   scanf("%d", &s);

   int ans=lin(a,s,n,0);

   if(ans==n)
    printf("\n Not found!");
   
   else
    printf("\n Element found at a[%d].",ans);
 }
