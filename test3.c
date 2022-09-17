#include<stdio.h>


void main(){

int i,noofdays;
int first;
int month;
  printf("Enter the value of month:");
  scanf("%d", & month);

void days(){

	for(i=1;i<first;i++)
      printf(" ");
   for(i=1;i<=noofdays;i++){
      printf("%3d",i);
      if((first+i-1)%7==0)
         printf("\n");
         }}



switch (month) {
  case 1:{
    printf("January\n");
    
   noofdays=31;
   first=1;
   days();
   }
   
    break;
  case 2:{
    printf("February\n");
    noofdays=29;
   first=2;
    for(i=1;i<first;i++)
      printf(" ");
   for(i=1;i<=noofdays;i++){
      printf("%3d",i);
      if((first+i-1)%7==0)
         printf("\n");
    }}
    break;






}
   
}
