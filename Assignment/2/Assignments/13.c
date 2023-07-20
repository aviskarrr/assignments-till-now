#include<stdio.h>
int main(){
    int a,rem,sum=0;
    printf("Enter a 4 digit number");
    scanf("%d",&a);
    while (a>0)
    {
        rem=a%10;
        sum+=rem;
        a/=10;
    }

    printf("\n%d",sum);
    return 0;

}