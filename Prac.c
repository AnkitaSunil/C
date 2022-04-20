#include<stdio.h>

 int f=0,r=0,n=10,q[10];//GLOBAL DECLARATION
 void main()
 {
int qinsert();//FUNCTION PROTO_TYPE
int qdelete();
int display();
int ch;
;
while(1)
{
printf("\n********************************************\n");
printf("ENTER YOUR CHOICE :\n");
printf("1.INSERTION\n");
printf("2.DELETION\n");
printf("3.DISPLAY\n");
printf("4.QUIT\n");
printf("********************************************\n\n");
scanf("%d",&ch);
switch(ch)
{
case 1: qinsert();
break;
case 2: qdelete();
break;
case 3: display();
break;
default :return;
}
}

 }
 // Q-INSERTION
 int qinsert()
 {
int e;
if(r==n) // TO CHECK IS QUEUE IS full()

printf("\nQ - OVERFLOWS!!!!!!!!!!!!!!\n");
else
{
printf("\nENTER THE ELEMENT TO BE INSERTED TO THE Q\n");
scanf("%d",&e);
r=(r%n)+1;//r ACTS AS COUNTER
q[r]=e;
if(f==0) //THE POSSIBLE DELETING ELEMENT FROM IS AT FIRST
f=1;
display(r,f);
}
 }
 // Q - DELETION
 int qdelete()
 {
int e;
if(f==0) /* OR YOU CAN TAKE if(r==0),THEY ARE SAME ONLY WHEN
 Q - IS EMPTY OR IT CONTAINS ONLY ONE ELEMENTS */
printf("\nQ - IS EMPTY!!!!!!!!!!!!\n");
else
{
e=q[f];//BECAUSE DELETION TAKES PLACE ONLY IN FRONT END
if(f==r)
{
f=0;
r=0;
}
else
{
f=(f%n)+1;
 // r=(r%n)+1;
display(r,f);
}
printf("\nTHE ELEMENT %d IS DELETED FROM THE Q!!!\n",e);//LAST
//PRINT THEN SHOW Q - STRUCTURE
}
 }
 // TO DISPLAY Q - CONTENTS
 int display(int r, int f)
 {
int i;
printf("\nTHE UPDATED Q - IS...........\n\n");

if(f==r)
for(i=f;i<=r;i++)
printf(" | %d | <---",q[i]);
if(f<r)
for(i=f;i<=r;i++)
printf(" | %d | <---",q[i]);
if(f>r)
for(i=r;i<=f;i++)
printf(" | %d | <---",q[i]);
 // if(i<r)
 // printf(" ");
 }
