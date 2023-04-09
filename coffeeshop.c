#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int itemsstock[3]= {50,50,50},itemsrefill[3]={50,50,50},itemsprice[3]={20,15,10},customer[10];
    int order,Quantity,Bill,loop,Discount=0,i=1,totalcollectiontoday=0;
    char itemsname[10][10]= {"Coffee","Tea","Vadai"};
    for(int i=1;i<=N;i++)
    {
        printf("\t\t\nCustomer %d",i);
        printf("\n\nOrder 150 above get 20%% Discount");
        loop=1;
        Bill=0;
        while(loop)
        {
            printf("\n\n\t--------Menu Card---------");
            printf("\n\n 1.Coffee = Rs.20");
            printf("\tStock = %d\n",itemsstock[0]);
            printf("\n 2.Tea    = Rs.15");
            printf("\tStock = %d\n",itemsstock[1]);
            printf("\n 3.Vadai  = Rs.10");
            printf("\tStock = %d\n",itemsstock[2]);

            printf("\n\nSelect = ");
            scanf("%d",&order);
            printf("\n\nHow many %s =",itemsname[order-1]);
            scanf("%d",&Quantity);

            if(Quantity<=itemsstock[order-1]&&Quantity>0)
            {
                itemsstock[order-1]-=Quantity;
                Bill=Bill+(itemsprice[order-1]*Quantity);

                if(itemsstock[order-1]<=(itemsrefill[order-1]*0.2))
                {
                    itemsstock[order-1]=itemsrefill[order-1];
                }
            }
            else
            {
                printf("Error");
                exit(0);
            }

            printf("\nPress 1 to 'Continue' or Press 0 to 'Exit' = ");
            scanf("%d",&loop);
        }

        if(Bill>=150)
        {
            Discount=(Bill*0.2);
        }
        printf("\n -------------------------");
        printf("\n|Bill = %d  Discount = %d  |\n",Bill,Discount);
        printf("\n|Total amount = %d        |",Bill-Discount);
        printf("\n -------------------------");
        customer[i]=Bill-Discount;
        totalcollectiontoday+=Bill-Discount;
        printf("\n------------------------------------------------------------------------------------------------------");
    }
    printf("\nTotal Collection Today = %d",totalcollectiontoday);
    for(int i=1; i<=N; i++)
    {
        printf("\n\nCustomer %d = %d",i,customer[i]);
    }
    return 0;
}
