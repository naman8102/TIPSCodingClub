#include<conio.h>
void main()
{
int num,orgNum,r,result=0;
clrscr();
printf("Enter one number: ");
scanf("%d",&num);
orgNum = num;

while(orgNum > 0)
{
r = orgNum%10;
result = result + (r*r*r);
orgNum = orgNum/10;
}
if(result == num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
getch();
}
