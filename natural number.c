#include<stdio.h>
int main()
{

    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int count = 1;
    while(count <=n){
        printf("%d ",count);
        count++;
    }
    return 0;
}
