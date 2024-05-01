//Write a c program for implementing of stack and its operation
#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size];
int x,ch,tos=0;
void push();
void pop();
void peek();
void display();
void main()
{
clrscr();
do
{
	printf("\n\t 1 PUSH");
	printf("\n\t 2 POP");
	printf("\n\t 3 PEEK");
	printf("\n\t 4 DISPLAY");
	printf("\n\t 5 EXIT");

	printf("\n\tEnter The Number:- ");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
		push();
	break;

	case 2:
		pop();
	break;

	case 3:
		peek();
	break;

	case 4:
		display();
	break;

	case 5:
		exit(0);
	break;

	default:
		printf("The Number Is Not Valid");
	break;

       }
}while(ch!=0);
getch();
}
void push()
{


	if(tos>(size-1))
	{
		printf("\nstack is overflow");
	}
	else
	{
	       printf("\nenter the value =");
	       scanf("%d",&x);

	       stack[tos]=x;
	       tos++;
	}
}
void pop()
{
	 if(tos==0)
	 {
	       printf("\nstack is underflow");
	 }
	 else
	 {
		  stack[tos]=NULL;
		  tos--;
	 }
}
void peek()
{
       if(tos==0)
       {
		printf("\nstack is underflow");
       }
}
void display()
{
	     int i;
	     if(tos==0)
	     {
		   printf("\nstack is underflow");
	     }
	     else
	     {
		     for(i=0;i<tos;i++)
		     {
			   printf("%d\n",stack[i]);
		     }
	     }

}