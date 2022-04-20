#include<stdio.h>

int a[20],p=0,n=5,i=0,ch=0;
int ins(), del();
void display();

void main()
 {
   do
    {
      printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit ");
      printf("\n\nPlease enter your choice: ");
      scanf("%d", &ch);

      switch(ch)
       {
         case 1:
                 {
                   ins();
                   break;
                 }
         case 2:
                 {
                   del();
                   break;
                 }
         case 3:
                 {
                   display();
                   break;
                 }
         case 4:
                 break;
         default:
                  {
                    printf("\nWrong entry!");
                    break;
                  }
       }
    }
   while(ch<=3);
 }

 int ins()
  {
    if(p==n)
     printf("\nQueue Overflow!\n");

    else
     {
       printf("\nEnter the element to be inserted: ");
       scanf("%d", &a[p]);
       
       p=p+1;       
     }
    return(0);
  }

int del()
 {
   if(p==0)
    printf("\nQueue Empty!\n");

   else
    {
      printf("\nDeleted element is %d", a[0],"!\n");

      for(i=0;i<n;i++)
       a[i]=a[i+1];

      p=p-1;
    }
   printf("\n");
   return(0);
 }

void display()
 {
   if(p==0)
    printf("\nQueue Empty!\n");

   else
    {
      printf("\nThe queue elements are as follows:\n");
      for(i=p-1;i>=0;i--)
       printf("%d " ,a[i]);
    }
   printf("\n");;
 }
