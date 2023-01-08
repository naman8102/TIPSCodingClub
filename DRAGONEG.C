#include<conio.h>
void main()
{
int G,S,A,B;
/*	G = Cost of Gold
	S = Cost of Silver
	A = Grams of Gold
	B = Grams of Silver
*/
clrscr();
printf("Enter the Cost of Gold per Grams: ");
scanf("%d",&G);
printf("Enter weight of the Gold in Grams: ");
scanf("%d",&A);
printf("Enter the Cost of Silver per Grams: ");
scanf("%d",&S);
printf("Enter weight of the Silver in Grams: ");
scanf("%d",&B);

if(G*A > S*B)
printf("GOLD");
else
printf("SILVER");
getch();
}