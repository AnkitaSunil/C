#include<stdio.h>

int m=0;

int TOH(int n,char s,char d,char t)
 {
   if(n==1)
    {
      printf("\n Move disk 1 from rod %c to rod %c.",s,d);
      m++;
      return d;
    }

    TOH(n-1,s,t,d);

    printf("\n Move disk %d from rod %c to rod %c.",n,s,d);
    m++;

    TOH(n-1,t,d,s);
 }
 
void main()
 {
   int n;

   printf("Enter the number of disks: ");
   scanf("%d",&n);

   TOH(n,'A','C','B');

   printf("\n\n Number of moves: %d.",m);
 }
