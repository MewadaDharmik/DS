//Write a c program to insert an element into Sorted linked list. 

/* sorted element in link list*/
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
void sort();
void display();
void main()
{
    clrscr();
    while(ch != 10)
    {
	printf("\n===============================================\n");
	printf("\n1.Insert at First");
	printf("\n2.sort");
	printf("\n3.display");
	printf("\n4.exit");
	printf("\nEnter your choice\n");
	scanf("\n%d",&ch);
	switch(ch)
	{
	    case 1:
		insertfirst();
	    break;
	    case 2:
		sort();
	    break;
	    case 3:
		display();
	    break;
	    case 4:
		exit(0);
	    break;
	    default:
		 printf(" invalid choice..");
	    break;
	}
    }
    getch();

}
void insertfirst()
{
    New = (struct node *) malloc(sizeof(struct node *));
    if(New == NULL)
    {
	printf("\nOVERFLOW");
    }
    else
    {
	printf("\nEnter value\n");
	scanf("%d",&value);
	New->data = value;
	New->link = start;
	start = New;
	printf("\nNode inserted");
    }

}
void sort()
{
    int temp;
    struct node *New,*count;
	printf("\nprinting values . . . . .\n");
	for(New=start;New->link!=NULL;New=New->link)
	{
	    for(count=New->link;count->link!=NULL;count=count->link)
	    {
		if(New->data>count->data)
		{
		     temp=count->data;
		     count->data=New->data;
		     New->data=temp;
		}

	    }
	}
	for(New=start;New!=NULL;New=New->link)
	{
		printf("\n%d",New->data);
	}


}
void display()
{
    struct node *New;
    New = start;
    if(New == NULL)
    {
	printf("Nothing to print");
    }
    else
    {
	printf("\nprinting values . . . . .\n");
	while (New!=NULL)
	{
	    printf("\n%d",New->data);
	    New = New -> link;
        }  
    }
}
