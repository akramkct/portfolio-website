#include<stdio.h>
#include<conio.h>
void main()
{
	long int num,d,sum=0,fact=1,start,end,a,k,cpy;
	clrscr();
	printf("enter start number:");
	scanf("%d",&start);
	printf("enter end number:");
	scanf("%d",&end);
	for(k=start;k<=end;k++)
	{
		num=k;
		cpy=num;
		while(num!=0)
		{
			d=num%10;
			num=num/10;
			for(a=d;a>=1;a--)
			{
				fact=fact*d;
			}
			sum=sum+fact;
		}
		num=cpy;
		if(sum==num)
		{
			printf("\n\t %d is strong number",num);
		}
	}
	getch();
}