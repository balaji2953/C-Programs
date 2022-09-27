#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Enter your string=");
    scanf("%s",&str);
    printf("\n");
    printf("Reverse String=%s",strrev(str));
    return 0;
}