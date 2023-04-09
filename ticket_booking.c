#include<stdio.h>

int main()
{
 int age,no_ticket,train_ticket=1000,flight_ticket=2000,ticket,total=0;
 printf("\tTicket Price");
 printf("\n\n 1.Train ticket  = 1000");
 printf("\n 2.Flight ticket = 2000");
 printf("\n\nEnter number of tickets = ");
 scanf("%d",&no_ticket);
 for(int i=1;i<=no_ticket;i++)
 {
  printf("\n\t%dPerson",i);
  printf("\n\n1.Train or 2.Flight = ");
  scanf("%d",&ticket);
  printf("\nAge = ");
  scanf("%d",&age);
  if(age>=55)
   total+=((ticket==1)?train_ticket:flight_ticket)/2;
  else
   total+=(ticket==1)?train_ticket:flight_ticket;
 }
 printf("\nTotal Amount = %d",total);
 return 0;
}
