#include<conio.h>
void main()
{
int num1,num2,r=0;
clrscr();
printf("Enter 1st number: ");
scanf("%d",&num1);
printf("Enter 2nd number: ");
scanf("%d",&num2);

if(num1==0 && num2==1)
{
r = r+2;
printf("%d",r);
}

else if(num1==0 && num2>1 || num2==0 && num2>1)
printf("%d",r+1);

else
printf("%d",r);

getch();
}