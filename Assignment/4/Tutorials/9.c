#include<stdio.h>
int main(){
    int a,sum=0;
    char c;
    do
    {
        printf("Enter a Number = ");
        scanf("%d",&a);
        sum+=a;
        printf("\nDo you want to add new number?(Y/N)");
        scanf(" %c", &c);
    } while (c!='n' && c!='N');
    printf("\nSum = %d",sum);
    return 0;
}