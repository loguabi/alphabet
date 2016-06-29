#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter any character:");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A' && c<='Z'))
{
printf("Character is an alphabet\n");
}
else
{
printf("Character is noy alphabet\n");
}
getch();
}
