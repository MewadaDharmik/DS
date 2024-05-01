// Write a c program for implementing a Singly linked list and its operation. 

			/*single link list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ch,value;
struct node
{
	int data;
	struct node *link;
}*start,*New;

void insertfirst();
void insertlast();
void deletefirst();
void deletelast();
void display();
void main()
{
	clrscr();
	while(ch!=10)
	{
		printf("\n1 insertfirst");
		printf("\n2 insertlast");
		printf("\n3 deletefirst");
		printf("\n4 deletelast");
		printf("\n5 display");
		printf("\n6 exit");
		printf("\n enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertfirst();
			break;
			case 2:
				insertlast();
			break;
			case 3:
				deletefirst();
			break;
			case 4:
				deletelast();
			break;
			case 5:
				display();
			break;
			case 6:
				exit(0);
			break;
			default:
				printf("invalid choice");
			break;
			}
	}
getch();
}
void insertfirst()
{
	New= (struct node *)malloc(sizeof(struct node *));
	if(New == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nenter value\n");
		scanf("%d",&value);
		New->data=value;
		New->link=start;
		start=New;
	}
}
void insertlast()
{
	struct node *temp;
	New= (struct node *)malloc(sizeof(struct node *));
	if(New == NULL)
	{
		printf("\nenter value\n");
		scanf("%d",&value);
		New->data=value;
		if(start == NULL)
		{
			New->link=NULL;
			start=New;
		}
		else
		{
			temp=start;
			while(temp->link != NULL)
			{
				temp = temp -> link;
			}
			temp->link=New;
			New->link = NULL;
		}
	}
}
void deletefirst()
{
	if(start == NULL)
	{
		printf("\nUNDERFLOW");
	}
	else
	{
		New=start;
		start = New->link;
		free(New);
	}
}
void deletelast()
{
	struct node *last;
	if(start == NULL)
	{
		printf("UNDERFLOW");
	}
	else if(start-> link == NULL)
	{
		start = NULL;
		free(start);
	}
	else
	{
		New = start;
		while(New->link != NULL)
		{
			last=New;
			New=New->link;
		}
		last-> link =  NULL;
		free(New);
	}
}
void display()
{
	struct node *New;
	New = start;
	if(New == NULL)
	{
		printf("NOTHING PRINTED");
	}
	else
	{
		printf("PRINTED VALUES");
		while (New!=NULL)
		{
			printf("%d",New->data);
			New = New -> link;
		}
	}
}

