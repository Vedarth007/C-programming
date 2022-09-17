
//Vedarth Jayant Khandve 26 SE B 29 AUGUST 2022

#include<stdio.h>
#include<string.h>

void main()
{
char name1[50],name2[50];

printf("Enter the name1 ");
scanf("%s:",name1);

printf("Enter the name2 ");
scanf("%s:",name2);


//printf("name1 is %s\n",name1);
//printf("name2 is %s\n",name2);


strcat(name1,name2);

printf("the cat is%s:",name1);

}

/*
Enter the name1 Vedarth 
Enter the name2 Omkar*/
































/*
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



//printf("name1 is %s\n",name1);
//printf("name2 is %s\n",name2);


strcat(name1,name2);

printf("the cat is%s:",name1);

}*/
