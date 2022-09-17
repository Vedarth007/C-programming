//Vedarth Jayant Khandve 26 SE B 26 AUGUST 2022
#include<stdio.h>
void main()
{
int r,c,a[10][10],i,j,b[10][10],d[10][10];
printf("How many Rows and Column:");
scanf("%d%d",&r,&c);
printf("Which element:");

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  
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
  d[i][j]=a[i][j]+b[i][j];
}}
 
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {  
  printf("%d \t",d[i][j]);
 }
  printf("\n");
  
 }
}
 

