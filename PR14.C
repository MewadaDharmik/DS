//Write a c program for implementing a double ended queue and its operation

			//Double Ended Queue

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5
int dq[size];
int ch,x,f=-1,r=-1;

void ird();
void ord();
void insertf();
void insertr();
void deletef();
void deleter();
void display();

void main()
{
	clrscr();

	printf("\n\t1.IRD - Input Restricted Dequeue");
	printf("\n\t2.ORD - OUTPUT Restricted Dequeue");
	printf("\n\t3.EXIT");
	printf("\nEnter Your Choice==");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			ird();
		break;

		case 2:
			ord();
		break;

		case 3:
			exit(0);
		break;

		default:
			printf("\n\t!!!Invalid Choice!!!");
		break;
	}
	getch();
}

void ird()
{
	do
	{
		printf("\n1.Insert From Rearside");
		printf("\n2.Delete From Frontside");
		printf("\n3.Delete From Rearside");
		printf("\n4.Display");
		printf("\n5.Exit");

		printf("\nEnter Choice ==");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				insertr();
			break;

			case 2:
				deletef();
			break;

			case 3:
				deleter();
			break;

			case 4:
				display();
			break;

			case 5:
				exit(0);
			break;

			default:
				printf("\n!!!Invalid Choice!!!");
			break;
		}


	}while(ch!=5);
}

void ord()
{
	do
	{
		printf("\n1.Insert From Rearside");
		printf("\n2.Insert From Frontside");
		printf("\n3.Delete From Frontside");
		printf("\n4.Display");
		printf("\n5.Exit");

		printf("\nEnter Choice ==");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				insertr();
			break;

			case 2:
				insertf();
			break;

			case 3:
				deletef();
			break;

			case 4:
				display();
			break;

			case 5:
				exit(0);
			break;

			default:
				printf("\n!!!Invalid Choice!!!");
			break;
		}


	}while(ch!=5);
}

void insertr()
{
	if((f==0 && r==size-1)||(f==r+1))
	{
		printf("\n\t!!!Queue Is Overflow!!!");
	}

	if(f==-1)
	{
		f=r=0;
	}
	else
	{
		if(r==size-1)
		{
			r=0;
		}
		else
		{
			r++;
		}
	}
	printf("\n Enter The No = ");
	scanf("%d",&x);

	dq[r]=x;

}

void insertf()
{
	if((f==0 && r==size-1)||(f==r+1))
	{
		printf("\n\t!!!Queue Is Overflow !!!!");
	}

	if(f==-1)
	{
		f=r=0;
	}
	else
	{
		if(f==0)
		{
			f=size-1;
		}
		else
		{
			f--;
		}

		if(f==0)
		{
			f=size-1;
		}
		else
		{
			f--;
		}
	}
	printf("\nEnter The No=");
	scanf("%d",&x);

	dq[f]=x;

}

void deletef()
{
	int a;

	if(f==-1)
	{
		printf("\nQueue Is Underflow");
	}
	a=dq[f];
		printf("\n\t deleted Queue = %d",a);

	if(f==r)
	{
		f=r=-1;
	}
	else
	{
		if(f==size-1)
		{
			f=0;
		}
		else
		{
			f++;
		}
	}
}

void deleter()
{
	int a;

	if(f==-1)
	{
		printf("\n\t!!!Queue Is Underflow!!!");
	}
	a=dq[r];
	printf("\n\t Deleted Element = %d",a);

	if(f==r)
	{
		f=r=-1;
	}
	else
	{
		if(r==0)
		{
			r=size-1;
		}
		else
		{
			r++;
		}
	}
}

void display()
{
	int front=f,rear=r;

	if(f==-1)
		printf("\nQueue Is Underflow");

		if(front<=rear)
		{
			while(front<=rear)
			{
				printf("\n%d",dq[front]);
				front++;
			}
		}
		else
		{
			while(front<=size-1)
			{
				printf("\n%d",dq[front]);
				front++;
			}
		}

}

