//Write a c program for implementing a circular queue and its operation. 

			//circular queue

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5
int cq[size];
int x,ch,f=-1,r=-1;

void cqinsert();
void cqdelete();
void cqdisplay();

void main()
{
	clrscr();
	do
	{
		printf("\n\t1.CQ INSERT");
		printf("\n\t2.CQ DELETE");
		printf("\n\t3.CQ DISPLAY");
		printf("\n\t4.EXIT");
		printf("\n\tEnter Your Choice==");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				cqinsert();
			break;

			case 2:
				cqdelete();
			break;

			case 3:
				cqdisplay();
			break;

			case 4:
				exit(0);
			break;

			default:
				printf("\n\tInvalid Value!!!");
			break;
		}


	}while(ch!=5);
}

void cqinsert()
{
	if((f==0&&r==size-1)||(f==r+1))
	{
		printf("\n\t CQ IS OVERFLOW!!");
	}
	else
	{
		printf("\n\tEnter Value==");
		scanf("%d",&x);

		if(r==-1)
		{
			f=0,r=0;
		}
		else if(r==size-1)
		{
			r=0;
		}
		else
		{
			r++;
		}
		cq[r]=x;
	}
}

void cqdelete()
{
	int a;

	if(f==-1)
	{
		f=-1,r=-1;
	}
	else if(f==size-1)
	{
		f=0;
	}
	else
	{
		f++;
	}

	a=cq[f];

	printf("\n\tDeleted Value Is %d",a);
}

void cqdisplay()
{
	int i,j;

	if(f==0&&r==0)
	{
		printf("\n\tQueue Is Underflow!!");
	}
	if(f>r)
	{
		for(i=f;i<size;i++)
		{
			printf("\n\t%d",cq[i]);
		}
		for(j=0;j<=r;j++)
		{
			printf("\n\t%d",cq[j]);
		}
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("\n\t%d",cq[i]);
		}
	}

}
