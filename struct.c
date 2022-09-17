//Vedarth Jayant Khandve 26 SE B 27 AUGUST 2022
#include<stdio.h>
struct student
{
 char firstname[50];
 int roll;
 int marks;
}
s;

void main()
{
 

  
  
  
  printf("For roll no:");
  scanf("%d",&s.roll);
  printf("First name:");
  scanf("%s",s.firstname);
  printf("Enter marks of student:");
  scanf("%d",&s.marks);
  
  
  printf("Roll no:%d\n",s.roll);
  printf("Marks:%d\n",s.marks);
  printf("Name:%s\n",s.firstname);
  
}
  
  
