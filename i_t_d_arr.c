//Write a program Insert, traversing, Delete, Sorting a 2-Dimension Array.
#include <stdio.h>
int main()
{
int b[2][3];
int i,j,num;
printf("Enter elements into 2-D array: ");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d" , &b[i][j]);
}
}
}

//Update

#include <stdio.h>
int main()
{
int b[2][3];
int i,j,num;
printf("Enter elements into 2-D array: ");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d" , &b[i][j]);
}
}

b[0][2]=10;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d" , b[i][j]);
}
printf("\n");
}
return 0;
}

//Delete

#include <stdio.h>
int main()
{
int b[2][3],i,j,num,x;
printf("Enter elements into 2-D array: ");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d" , &b[i][j]);
}
}
printf("Enter the value of row number :");
scanf("%d", &x);
for(i=0;i<2;i++)
{
if(i==x)
{
for(j=0;j<3;j++)
{
if((i+1)<2)
{
printf("\t%d" , b[i+1][j]);
}
}
i++;}
else

{
for(j=0;j<3;j++)
{
printf("\t%d" , b[i][j]);
}
}
printf("\n");
}
}