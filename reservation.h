#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//structure definition
struct res_list
{
 char p_name[30];
 char age[5];
 char a_num[20];
 char berth[5];
 char dot[10];
 char t_name[50];
 char b_station[50];
 char d_station[50];
}; 
//function prototype
void read(void);
void sort(void);
void search(void);
void print(void);
void sort_name();
void sort_age();
void sort_aadhar();
void sort_berth();
void sort_dot();
void sort_tname();
void sort_bstation();
void sort_dstation();
void search_name();
void search_age();
void search_aadhar();
void search_berth();
void search_tname();
void search_dot();
void search_bstation();
void search_dstation();
//global variables
char temp[50],sn[50],sag[50],sa[30],sb[30],sd[30],st[30],sbs[50],sds[50];
int ch,i,j,p1,x,n;
struct res_list *pas,*ptr;
//function definitions
void read(void)
{
printf("\n enter details of passingers");
for(i=0;i<n;i++)
{
 printf("\n enter details of passinger %d",i+1);
 printf("\n enter the name:");
 scanf("%s",pas->p_name);
 printf("\n enter the age:");
 scanf("%s",pas->age);
 printf("\n enter the aadhar number(12 DIGITS):");
 scanf("%s",pas->a_num);
 printf("\n enter the berth(u-upper,m-middle,l_lower):");
 scanf("%s",pas->berth);
 printf("\n enter the date of travell (ddmmyyyy):");
 scanf("%s",pas->dot);
 printf("\n enter the train name:");
 scanf("%s",pas->t_name);
 printf("\n enter the boarding station :");
 scanf("%s",pas->b_station);
 printf("\n enter the departing station :");
 scanf("%s",pas->d_station);
 pas++;
}
}
void sort()
{
printf("\n MENU FOR SORTING:\n 1.name WISE\n 2.age WISE\n 3.aadhar number WISE\n 4.berth WISE\n 5.date of travel WISE\n 6.train name WISE\n 7.boardimg station\n 8.departed station\n");
printf("\n enter option:");
scanf("%d",&ch);
//switch Case
switch(ch)
{
 case 1:sort_name();//function call
 break;
 case 2:sort_age();//function call
 break;
 case 3:sort_aadhar();//function call
 break;
 case 4:sort_berth();//function call
 break;
 case 5:sort_dot();//function call
 break;
 case 6:sort_tname();//function call
 break;
 case 7:sort_bstation();//function call
 break;
 case 8:sort_dstation();//function call
 break;
 default: printf("\n sorry you entered wrong option try again");
}
}
void sort_name()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->p_name);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
}
}
void sort_age()
{
 pas=ptr;
 char str[3][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->age);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_aadhar()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->a_num);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_berth()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->berth);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
 
}
void sort_dot()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<=n;i++)
 {
 strcpy(str[i],pas->dot);
 pas++;
 }
 for(i=0;i<=n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_tname()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<=n;i++)
 {
 strcpy(str[i],pas->t_name);
 pas++;
 }
 for(i=0;i<=n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_bstation()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->b_station);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
}
}
void sort_dstation()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->d_station);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
}
}
void search()
{
 printf("\n MENU FOR SEARCHING:\n 1.name WISE\n 2.age WISE\n 3.aadhar num WISE\n 4.berth WISE\n 5.date of travel WISE\n 6.train name WISE\n7.boarding station\n 8. departure station");
 printf("\n enter option:");
 scanf("%d",&ch);
 //switch case
 switch(ch)
 {
 case 1:search_name();//function call
 break;
 case 2:search_age();//function call
 break;
 case 3:search_aadhar;//function call
 break;
 case 4:search_berth();//function call
 break;
 case 5:search_dot();//function call
 break;
 case 6:search_tname();//function call
 break;
 case 7:search_bstation();//function call
 break;
 case 8:search_dstation;//function call
 break;
 default:printf("\n sorry you entered wrong option try again");
 }
}
void search_name()
{
 int cv=0;
 pas=ptr;
 printf("\n enter passinger name:");
 scanf("%s",sn);
 for(i=0;i<n;i++)
 {
 x=strcmp(sn,pas->p_name);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
}
void search_age()
{
 int cv=0;
 pas=ptr;
 printf("\n enter a Type name:");
 scanf("%s",sag);
 for(i=0;i<n;i++)
 {
 x=strcmp(sag,pas->age);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
}
void search_aadhar()
{
 int cv=0;
 pas=ptr;
 printf("\n enter the aadhar number:");
 scanf("%s",sa);
 for(i=0;i<n;i++)
 {
 x=strcmp(sa,pas->a_num);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_berth()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter the berth:");
 scanf("%s",sb);
 for(i=0;i<n;i++)
 {
 x=strcmp(sb,pas->berth);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_dot()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter the date of travel :");
 scanf("%s",sd);
 for(i=0;i<n;i++)
 {
 x=strcmp(sd,pas->dot);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_tname()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter the train name:");
 scanf("%s",st);
 for(i=0;i<n;i++)
 {
 x=strcmp(st,pas->t_name);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_bstation()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter boarding station name :");
 scanf("%s",sbs);
 for(i=0;i<n;i++)
 {
 x=strcmp(sbs,pas->b_station);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_dstation()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter departure station name :");
 scanf("%s",sds);
 for(i=0;i<n;i++)
 {
 x=strcmp(sds,pas->d_station);
 if(x==0)
 {
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth : %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 cv++;
 }
 else
 {
 printf("\n\n the passinger with above detais is not found \n ");
}
 pas++;
 }
 }
 void print()
 {
 pas=ptr;
 for(i=0;i<n;i++)
 {
 printf("\n Details of passinger %d are:",i+1);
 printf("\n name: %s",pas->p_name);
 printf("\n age: %s",pas->age);
 printf("\n aadhar number: %s",pas->a_num);
 printf("\n berth: %s",pas->berth);
 printf("\n date of travel: %s",pas->dot);
 printf("\n train name: %s",pas->t_name);
 printf("\n boarding station : %s",pas->b_station);
 printf("\n departued station :%s\n\n",pas->d_station);
 pas++;
 }
 }
