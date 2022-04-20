#include<stdio.h>

#include<conio.h>

#include<string.h>

#define operand 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
int s[30],n=30,t=0;


void main()

 {
   
int i;

   char ie[20],*se,c;


   void push();

   char pop();
   
char top();
   
int priority();



   printf("ENTER THE IN-FIX EXPRESSION TO CONVERT :\n");
   gets(ie);


   c=ie[0];

   i=0;

   
while(c!='\0')
    {
   
   switch(c)
       
{

         case
operand
:
se=strcat(se,c);
         
break;


         case '(' :
                    push(c);

                    break;

         
case ')' :
                    while(top(s)!='(')
                     
{

                       se=strcat(se,pop(s));

                     }


                    pop(s);

                    break;

         
case '~' : 
                    push(c);

                    break;

         
default
:
                  
while(priority(top(s))>=priority(c))
                   
{
                     
se=strcat(se,pop(s));
                   
}


                   push(c);

       }


      i++;
      
c=ie[i];
    }

 }


void push(char e)

 {
   
if(t==n)
    
printf("\nSTACK OVERFLOW!!!!!!!!!!!\n");


   else

    {
      
t=t+1;

      
s[t]=e;

    }
 
}


char pop()
 
{

   char e;

   
if(t==0)
    
printf("\nSTACK IS EMPTY!!!!!!!!!!!\n");


   else

    {
      
e=s[t];
      
t=t-1;

    }


   return e;

 }


int priority(char e)

 {
   
if(e=='(')

    return 5;


   else if(e=='~')
    
return 4;


   else if(e=='*'||e=='/')

    return 3;


   else if(e=='+'||e=='-')

    return 2;


   else
    
return 1;

 }


char top(char e)
 
{
   
e=s[t];

   return e;
 
}