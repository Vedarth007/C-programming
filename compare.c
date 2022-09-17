#include<stdio.h>
#include<string.h>

void main()
{
char name1[50],name2[50];

printf("Enter the name1 ");
fgets(name1,50,stdin);

printf("Enter the name2 ");
fgets(name2,50,stdin);

if(strcmp(name1,name2)==0)
{
printf("The strings are equal");
//puts(name1);
}
else{
printf("The strings are not equal");
} 
}


