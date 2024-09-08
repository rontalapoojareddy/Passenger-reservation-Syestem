#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "reservation.h"
//global variables
char a;
//main starts here
int main()
{
 //menu repetition
 printf("\n enter the no. of passingers detais you want to store:");
 scanf("%d",&n);
 ptr=(struct res_list *)malloc(n*sizeof(struct res_list));
 pas=ptr;
 do
 {
system("cls");
 printf("\n MENU:\n 1.READ DATA\n 2.SORTING\n 3.SEARCHING\n 4.PRINT DATA");
 printf("\n enter option:");
 scanf("%d",&ch);
 //switch case
 switch(ch)
 {
 case 1:read();//function call
 break;
 case 2:sort();//function call
 break;
 case 3:search();//function call
 break;
 case 4:print();//function call
 break;
 }
 printf("\n enter y or Y to continue,enter n or N to exit:");
 scanf(" %c",&a);
 }
 while(a=='y'||a=='Y'); 
}