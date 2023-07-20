#include<stdio.h>
int main(){
    int a,b,sum;
    char c;
    do
    {
        printf("Enter Two Numbers = ");
        scanf("%d%d",&a,&b);
        sum = a+b;
        printf("\nSum of %d and %d is %d",a,b,sum);
        printf("\nDo you want to add new numbers?(Y/N)");
        scanf(" %c", &c);
        sum =0;
    } while (c!='n' && c!='N');
    return 0;
}