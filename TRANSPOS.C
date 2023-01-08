#include<conio.h>
void main()
{
int a[2][2],t[2][2],i,j;
clrscr();
printf("Enter Matrix of 2 dimensions");
//original matrix
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
}

for(i=0;i<2;i++)
{for(j=0;j<2;j++)
t[i][j] = a[j][i];
}
//This will transpose the value of a[i][j]
printf("The transpose of A matrix is : ");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
printf("\t%d",t[i][j]);
}
getch();
}