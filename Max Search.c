#include<stdio.h>

int a[100],n=0,i=0,m=0;

int max(int a[],int m,int n,int i)
 {
   if(i==n)
    return m;
    
   else 
    {
      if(m<a[i])
       m=a[i];

      i++;
      return max(a,m,n,i);
    }
 }

void main()
 {
   printf("\n Please enter the number of elements: ");
   scanf("%d", &n);

   printf("\n Please enter the elements: ");
   for(i=0;i<n;i++)
    scanf("%d", &a[i]);

   m=a[0];

   int ans=max(a,m,n,1);
   
   printf("\n Answer: %d",ans);
 }