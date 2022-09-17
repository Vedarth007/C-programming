//Vedarth Jayant Khandve 26 SE B 24 AUGUST 2022
#include<stdio.h>
void main()
{
int n,a[10],i;
printf("How many element");
scanf("%d",&n);
printf("Which element");

for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf("Array=%d\n",a[i]);
}
}
