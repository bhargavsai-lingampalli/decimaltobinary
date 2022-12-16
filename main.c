#include<stdio.h>
int main()
{
    int binary[100],i,num;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i=0; num>0; i++)
    {
        binary[i]=num%2;
        num/=2;
    }
    printf("Binary: ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",binary[i]);
    }
    return 0;
}
