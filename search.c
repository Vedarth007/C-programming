//Vedarth Jayant Khandve 26 SE B 26 AUGUST 2022
#include<stdio.h>
void main()
{
int n,a[10],i,no,flag=0;
printf("How many element:");
scanf("%d",&n);
printf("Which element:");

for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf("Array=%d\n",a[i]);
}

printf("Enter no to find index:");
scanf("%d",&no);

for(i=0;i<n;i++)
{
if(no==a[i])
{
printf("Element %d found at %d position \n ",no ,i);
flag=1;
break;
}

}

if(flag==0)
{
printf("The no %d is not found", no);
}
}


