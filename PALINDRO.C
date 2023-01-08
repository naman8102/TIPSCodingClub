#include<conio.h>
void main()
{
int num,r,result=0,orgNum;
clrscr();
printf("Enter a number: ");
scanf("%d",&num);
orgNum = num;
while(num != 0)
{
r = num%10;
result = (result*10) + r;
num = num/10;
}
if(orgNum == result)
printf("%d is a Palindrome number.",orgNum);
else
printf("%d is not a Palindrome number.",orgNum);
getch();
}