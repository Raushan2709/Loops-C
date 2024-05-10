#include <stdio.h>
int main()
{
    int number;
    printf("enter no. of times \n");
    scanf("%d",&number);
    for (int i=0;i<=8;i++)
    {
        char b;
        scanf("%c",&b);
        printf("%c",b);
    }
    return 0;
}