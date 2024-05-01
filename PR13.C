//Write a c program for implementing a simple queue and its operation. 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int q[size];
int x,ch,f=0,r=0;

void enqueue();
void dequeue();
void display();

void main()
{
	clrscr();

	do
	{
		printf("\n1:insert the element");
		printf("\n2:delete the element");
		printf("\n3:display the element");
		printf("\n4:exit");

		printf("\nEnter Your Choice==>");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				enqueue();
			break;

			case 2:
				dequeue();
			break;

			case 3:
				display();
			break;

			case 4:
				exit(0);
			break;

			default:
				printf("\nEnter Valid Choice!!!");
			break;

		}

	}while(ch!=5);

	getch();
}

void enqueue()
{
	if(r>=size)
	{
		printf("\n\tQueue Is Overflow!!!");
	}
	else
	{
		printf("enter the no=");
		scanf("%d",&x);
		q[r]=x;
		r++;
	}
}

void dequeue()
{
	if(f==r&&f==0)
	{
		printf("\n\tQueue Is Underflow!!!");
	}
	else
	{
		q[f]=NULL;
		f++;
	}
}

void display()
{
	int front=f;
	int temp=0;

	if (f==r&&f==0)
	{
		printf("\n Queue Is Underflow!!!");

	}
	else
	{
		while(f!=r)
		{
			printf("\n%d",q[f]);
			f++;
			temp++;
		}

	}
	f=front;

}