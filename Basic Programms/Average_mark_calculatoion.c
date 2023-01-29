#include<stdio.h>
#include<conio.h>

int main()
{
 int M1,M2,M3,M4,M5,Total_mark;
 float Average_mark;

 printf("Enter Mark1=");
 scanf("%d",&M1);
 printf("Enter Mark2=");
 scanf("%d",&M2);
 printf("Enter Mark3=");
 scanf("%d",&M3);
 printf("Enter Mark4=");
 scanf("%d",&M4);
 printf("Enter Mark5=");
 scanf("%d",&M5);

 Total_mark=M1+M2+M3+M4+M5;
 Average_mark=Total_mark/5;

 printf("\nTotal Mark=%d",Total_mark);
 printf("\nAverage Mark=%0.2f",Average_mark);
 return 0;
}
