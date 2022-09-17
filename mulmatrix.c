//Vedarth Jayant Khandve 26 SE B 27 AUGUST 2022
#include<stdio.h>
void main()

{

int r,c,a[10][10],i,j,b[10][10],d[10][10],k;
printf("How many Rows and Column:");
scanf("%d%d",&r,&c);



for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("Which element for Matrix A\n :");
  scanf("%d",&a[i][j]);
  }
 }
 
 
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
printf("Enter elements for Matrix B\n :");
scanf("%d",&b[i][j]);
}
} 

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  d[i][j]=0;
  for(k=0;k<c;k++)
  {
  d[i][j]= d[i][j]+a[i][k]*b[k][j];
}}}

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {  
  printf("%d \t",d[i][j]);
 
  }printf("\n");
  
 }
}







