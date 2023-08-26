/*
Sample Input
 Welcome to C programming.

Sample Output
 Hello, World!
 Welcome to C programming.
*/
#include<stdio.h>

int main()
{
    char s[100];

    printf("Enter the String : ");
    scanf("%[^\n]%*c", &s);  //(or) gets(s);

    printf("Hello, World!\n");
    printf("%s",s);

    return 0;
}
