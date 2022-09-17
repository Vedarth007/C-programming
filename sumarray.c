//Vedarth Jayant Khandve 26 SE B 24 AUGUST 2022
#include<stdio.h>
void main()
{
int n,i,a[10],sum=0,product=1;
printf("How many element:");
scanf("%d",&n);
printf("Which element:");

for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
product=product * a[i];
}
printf("sum of elements of array is:%d\nproduct of element is:%d\n",sum,product);


for(i=0;i<n;i++)
{
printf("Array=%d\n",a[i]);
}
}
