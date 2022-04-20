#include<stdio.h>

float num=0.0,temp=0.0;

static int a[100],
i=0,j=0,ch=0,n1=0,t=0,n=0;

void show()

  {

    for(i=0;i<n;i++)

      printf(" %d ",a[i]);

  }

void display()

  {

    for(i=0;i<n;i++)

      {

        if(a[i]<10)

          printf(" %d ",a[i]);



        else if(a[i]==10)

          printf(" A ");



        else if(a[i]==11)

          printf(" B ");



        else if(a[i]==12)

          printf(" C ");



        else if(a[i]==13)

          printf(" D ");



        else if(a[i]==14)

          printf(" E ");



        else if(a[i]==15)

          printf(" F ");

      }

  }



void bin()

  {

    if(num<0.0)

      {

        printf("-");

        num=0.0-num;

      }



    n1=num;

    temp=num-n1;



    do

      {

        a[n]=n1%2;

        n1=n1/2;

        n++;

      }

    while(n1!=1);



    a[n]=n1;

    n++;


    j=n-1;


 
   while(i<j)

      {

        t=a[i];

        a[i]=a[j];

        a[j]=t;

        i++;

        j--;

      }



    show();


    printf(".");



    for(i=0;i<100;i++)

      a[i]=0;

    n=0;



    while(temp!=0.00)

      {

        temp=temp*2.0;

        a[n]=temp;

        n++;



        if(temp>=1.0)

          temp=temp-1.0;

      }



    show();

  }




void oct()

  {

    if(num<0.0)

      {

        printf("-");
        num=0.0-num;

      }



    n1=num;

    temp=num-n1;



    do

      {

        a[n]=n1%8;

        n1=n1/8;

        n++;

      }

    while(n1!=0);



    j=n-1;


 
   while(i<j)

      {

        t=a[i];

        a[i]=a[j];

        a[j]=t;

        i++;

        j--;

      }



    printf("\n");


    show();


    printf(".");



    for(i=0;i<100;i++)

      a[i]=0;



    n=0;



    while(temp!=0.00)

      {

        temp=temp*8.0;

        a[n]=temp;

        temp=temp-a[n];

        n++;

      }



    show();

  }



void hex()

  {

    if(num<0.0)

      {

        printf("-");

        num=0.0-num;

      }



    n1=num;

    temp=num-n1;



    do

      {

        a[n]=n1%16;

        n1=n1/16;

        n++;

      }


    while(n1!=0);



    j=n-1;


 
   while(i<j)

      {

        t=a[i];

        a[i]=a[j];

        a[j]=t;

        i++;

        j--;

      }



    printf("\n");


    display();



    printf(".");



    for(i=0;i<100;i++)

      a[i]=0;



    n=0;



    while(temp!=0.00)

      {

        temp=temp*16.0;

        a[n]=temp;

        temp=temp-a[n];

        n++;

      }



    display();

  }



void main()

  {

    printf("\nEnter the decimal number: ");

    scanf("%f",&num);



    printf("\n1. Binary Representation\n2. Octal Representation\n3. Hexadecimal Representation\n4. Exit\nPlease enter your choice: ");

    scanf("%d",&ch);



    switch(ch)

      {

        case 1:

                bin();

                break;



        case 2:

                oct();

                break;



        case 3:

                hex();

                break;



        case 4:
 
                break;



        default:

                 {

                   printf("\nWrong entry!");

                   break;

                 }

      }

  }