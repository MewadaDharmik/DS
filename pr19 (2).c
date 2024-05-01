#include<stdio.h>
#include<stdlib.h>
struct node
{
 int value;
 struct node *l;
 struct node *r;
}*root = NULL, *New = NULL, *p,*q;
void insert();
void delete();
void delete1();
void inorder(struct node *t);
void preorder(struct node *t);
void postorder(struct node *t);
void search(struct node *t);
void search1(struct node *t,int data);
int minimum(struct node *t);
int maximum(struct node *t);
int flag = 1;
void main()
{
 int ch;
 printf("\nOPERATIONS ---");
 printf("\n1 - Insert an element into tree\n");
 printf("2 - Delete an element from the tree\n");
 printf("3 - Inorder Traversal\n");
 printf("4 - Preorder Traversal\n");
 printf("5 - Postorder Traversal\n");
 printf("6 - Exit\n");
 while(1)
 {
printf("\nEnter your choice : ");
scanf("%d", &ch);
switch (ch)
{
case 1:
 insert();
 break;
case 2:
 delete();
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
default :
 printf("Wrong choice, Please enter correct choice ");
 break;
}
 }
}
/* To insert a node in the tree */
void insert()
{
 int data;
 struct node *t;
 printf("Enter data of node to be inserted : ");
 scanf("%d", &data);
 New= malloc(1*sizeof(struct node));
 New->value = data;
 New->l = New->r = NULL;
 if (root == NULL)
root = New;
 else
search(root);
}
/* Function to search the appropriate position to insert the new node */
void search(struct node *t)
{
if ((New->value>t->value) && (t->r != NULL)) /* value more than root 
node value insert at right */
search(t->r);
 else if ((New->value>t->value) && (t->r == NULL))
 t->r = New;
 else if ((New->value<t->value) && (t->l != NULL)) /* value less than root 
node value insert at left */
search(t->l);
 else if ((New->value<t->value) && (t->l == NULL))
t->l = New;
}
/* recursive function to perform inorder traversal of tree */
void inorder(struct node *t)
{
 if (root == NULL)
 {
printf("No elements in a tree to display");
return;
 }
 if (t->l != NULL)
inorder(t->l);//left
 printf("%d -> ", t->value);//root
 if (t->r != NULL)
inorder(t->r);//right
}
/* To find the preorder traversal */
void preorder(struct node *t)
{
 if (root == NULL)
 {
printf("No elements in a tree to display");
return;
 }
 printf("%d -> ", t->value);
 if (t->l != NULL)
preorder(t->l);
 if (t->r != NULL)
preorder(t->r);
}
/* To find the postorder traversal */
void postorder(struct node *t)
{
 if (root == NULL)
 {
printf("No elements in a tree to display ");
return;
 }
 if (t->l != NULL)
postorder(t->l);
 if (t->r != NULL)
postorder(t->r);
 printf("%d -> ", t->value);
}
/* To check for the deleted node */
void delete()
{
 int data;
 if (root == NULL)
 {
printf("No elements in a tree to delete");
return;
 }
 printf("Enter the data to be deleted : ");
 scanf("%d", &data);
 p = root;
 q = root;
 search1(root, data);
}
/* Search for the appropriate position to insert the new node */
void search1(struct node *t, int data)
{
 if ((data>t->value))
 {
p = t;
search1(t->r, data);
 }
 else if ((data < t->value))
 {
p = t;
search1(t->l, data);
 }
 else if ((data==t->value))
 {
delete1(t);
 }
}
/* To delete a node */
void delete1(struct node *t)
{
 int k;
 /* To delete leaf node */
 if ((t->l == NULL) && (t->r == NULL))
 {
if (p->l == t)
{
 p->l = NULL;
}
else
{
 p->r = NULL;
}
t = NULL;
free(t);
return;
 }
 /* To delete node having one left hand child */
 else if ((t->r == NULL))
 {
if (p == t)
{
 root = t->l;
 p = root;
}
else if (p->l == t)
{
 p->l = t->l;
}
else
{
 p->r = t->l;
}
t = NULL;
free(t);
return