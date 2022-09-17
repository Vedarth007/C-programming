//Vedarth Jayant Khandve 26 SE B 29 AUGUST 2022

#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
printf("Enter your name:");
fgets(name,50,stdin);

printf("Your name is:");
puts(name);

int length= strlen(name);


printf("the length is%d",length-1);

return 0;
}
