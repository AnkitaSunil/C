#include<stdio.h>
#include<conio.h>

int a[20],p=0,n=5,i=0,ch=0;
int push(), pop();
void display();

void main()
 {
   do
    {
      printf("\n1. Push\n2. Pop\n3. Display\n4. Exit ");
      printf("\n\nPlease enter your choice: ");
      scanf("%d", &ch);

      switch(ch)
       {
         case 1:
                 {
                   push();
                   break;
                 }
         case 2:
                 {
                   pop();
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

 int push()
  {
    if(p==n)
     printf("\nStack Overflow!\n");

    else
     {
       p=p+1;
       printf("\nEnter the element to be pushed: ");
       scanf("%d", &a[p]);
     }
    return(0);
  }

int pop()
 {
   if(p==0)
    printf("\nStack Empty!\n");

   else
    {
      printf("\nPopped element is %d", a[p],"!\n");
      a[p]=0;
      p=p-1;
    }
   printf("\n");
   return(0);
 }

void display()
 {
   if(p==0)
    printf("\nStack Empty!\n");

   else
    {
      printf("\nThe stack elements are as follows:\n");
      for(i=p;i>0;i--)
       printf("%d ", a[i]);
    }
   printf("\n");;
 }
