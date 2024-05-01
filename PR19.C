#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *l;
	struct node *r;
}*root = NULL, *New = NULL, *p,*q;
void insert();
void inorder(struct node *t);
void preorder(struct node *t);
void postorder(struct node *t);
void search(struct node *t);

void main()
{
	 int ch;
	clrscr();
	while(ch!=10)
	{
		printf("\nOPERATIONS ---");
		printf("\n1 - Insert an element into tree\n");
		printf("2 - search\n");
		printf("3 - Inorder Traversal\n");
		printf("4 - Preorder Traversal\n");
		printf("5 - Postorder Traversal\n");
		printf("6 - Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);

		switch (ch)
			{
				case 1:
					insert();
				break;
				case 2:
					search(root);
				break;
				case 3:
					inorder(root);
				break;
				case 4:
					preorder(root);
				break;
				case 5:
					postorder(root);
				break;
				case 6:
					exit(0);
				break;
				default :
					printf("Wrong choice, Please enter correct choice ");
				break;
			}
	}
 }
void insert()
{
	int data;
	struct node *t;
	printf("Enter data of node to be inserted : ");
	scanf("%d", &data);
	New= (struct node *)malloc(1*sizeof(struct node));
	New->value = data;
	New->l = New->r = NULL;
	if (root == NULL)
	{
		root = New;
	}
	else
	{
		search(root);
	}
}
void search(struct node *t)
{
	if ((New->value>t->value) && (t->r != NULL))
	 {
		search(t->r);
	 }
	else if ((New->value>t->value) && (t->r == NULL))
	 {
		t->r = New;
	 }
	else if ((New->value<t->value) && (t->l != NULL))
	 {
		search(t->l);
	 }
	else if ((New->value<t->value) && (t->l == NULL))
	 {
		t->l = New;
	 }
}
void inorder(struct node *t)
{
	if (root == NULL)
	{
		printf("No elements in a tree to display");
	return;
	}
	else if (t->l != NULL)
	  {
		inorder(t->l);
		printf("%d -> ", t->value);
	  }
}
void preorder(struct node *t)
{
	if (root == NULL)
	{
	printf("No elements in a tree to display");
	return;
	}
	else if (t->l != NULL)
	   {
		preorder(t->l);
	   }
	else if (t->r != NULL)
	    {
		preorder(t->r);
	    }
	printf("%d -> ", t->value);
}
void postorder(struct node *t)
{
	if (root == NULL)
	{
		printf("No elements in a tree to display ");
		return;
	}
	else if (t->l != NULL)
	{
		postorder(t->l);
	}
	else if (t->r != NULL)
	{
		postorder(t->r);
		printf("%d -> ", t->value);
	}
}
