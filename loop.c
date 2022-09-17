// Vedearth Jayant Khandve 26 SE B 24 AUGUST 2022
#include<stdio.h>
void main()
{
int no1,no2;
printf("Enter no1,no2");
scanf("%d %d",&no1,&no2);

	if (no1==no2)
	{
	printf("%d=%d",no1,no2);
	}
	else if (no1<no2)
	{
	printf("%d<%d",no1,no2);
	}
	else 
	{
	printf("%d>%d",no1,no2);
	}
}


