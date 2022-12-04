#include<stdio.h>

int main()
{
    int binary[100],i,a;
    printf("Enter Number: ");
    scanf("%d",&a);
    for(i=0; a>0; i++)
    {
        binary[i]=a%2;
        a/=2;
    }
    printf("\nBinary: ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",binary[i]);
    }
    return 0;
}