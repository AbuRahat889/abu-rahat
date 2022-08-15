#include<stdio.h>
int main()
{

    int number,sum=0,n;
    printf("Enter the number :");
    scanf("%d",&number);

    do{
            n = number%10;
            sum = n+ sum;
            number = number/10;
    }while(n!=0);
    printf("%d",sum);
    return 0;
}
