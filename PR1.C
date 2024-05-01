//Write a c program for linear search which find an element in an unsorted list.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int num;
    int i,keynum,found=1;
    int array[1];
    clrscr();


    printf("Enter the number of elements ");
    scanf("%d",&num);

    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
	scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched ");
    scanf("%d", &keynum);

    for (i = 0; i < num ; i++)
    {
	if (keynum == array[i] )
	{
	    found = 1;
	    break;
	}
    }
    if (found == 1)
	printf("Element is present in the array at position %d",i+1);
    else
	printf("Element is not present in the array\n");
  getch();
}
