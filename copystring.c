//Vedarth Jayant Khandve 26 SE B 29 AUGUST 2022

#include<stdio.h>
#include<string.h>

void main()
{
char name1[50],name2[50];

printf("Enter the name1 ");
fgets(name1,50,stdin);

printf("Enter the name2 ");
fgets(name2,50,stdin);

strcpy(name1,name2);

printf("the cpy is%s:",name1);
}
