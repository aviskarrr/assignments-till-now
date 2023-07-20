#include<stdio.h>
int main(){
    int a,rem4,rem1;
    printf("Enter a 4 digit number");
    scanf("%d",&a);
    rem4 = a%10;
    rem1 = a/1000;
    printf("%d %d",rem1,rem4);
    return 0;
}