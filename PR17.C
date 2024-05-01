//Write a c program for implementing a Doubly linked list and its operation. 

			/*DOBLY LINK LIST*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ch,value;
struct node
{
	int data;
	struct node *pre;
	struct node *next;
}*first,*New;

void insertfirst();
void insertlast();
void deletefirst();
void deletelast();
void display();
void main()
{
	clrscr();
	do
	{
		printf("\n1 insert first");
		printf("\n2 insert last");
		printf("\n3 delete first");
		printf("\n4 delete last");
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
	}while(ch!=10);
getch();
}
void insertfirst()
{
	New = malloc(sizeof(struct node));
	if(New == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nenter value\n");
		scanf("%d",&value);
	if(first==NULL)
	{
		printf("\n\t Your Entered Value Is %d",value);
		New -> next = NULL;
		New -> pre = NULL;
		New -> data = value;
		first = New;
	}
	else
	{
		New -> data = value;
		New -> pre = NULL;
		New -> next = first;
		first -> pre = New;
		first = New;
		}
	}
}
void insertlast()
{
	struct node *temp;
	New= malloc(sizeof(struct node));
	if(New == NULL)
	{
	 printf("\n\tOverflow");
	}																																																																																																				{
	printf("\nenter value\n");
	scanf("%d",&value);
	printf("\n\t Your Entered Value Is %d",value);
	New->data=value;
	if(first == NULL)
	{
		New-> next= NULL;
		New->pre=NULL;
		first=New;
	}
	else
	{
		temp=first;
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp->next=New;
		New->pre = temp;
		New -> next = NULL;
		}

	}
}
void deletefirst()
{
	struct node *del;
	if(first == NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if(first-> next == NULL)
	{
		first = NULL;
		free(first);
	}
	else
	{
		del = first;
		first = first -> next;
		first -> pre = NULL;
		free(del);
	}
}
void deletelast()
{
	struct node *del, *temp;
	if(first == NULL)
	{
		printf("UNDERFLOW");
	}
	else if(first-> next == NULL)
	{
		first= NULL;
		free(first);
	}
	else
	{
		temp = first;
		while(temp->next->next!= NULL)
		{
			temp=temp->next;
		}
		del = temp -> next;
		temp-> next =  NULL;
		free(del);
	}
}
void display()
{
	struct node *New;
	New = first;
	if(New == NULL)
	{
		printf("NOTHING PRINTED");
	}
	else
	{
		printf("PRINTED VALUES ARE\n");
		while (New!=NULL)
		{
			printf("\n\t%d\n",New->data);
			New = New -> next;
		}
	}
}

