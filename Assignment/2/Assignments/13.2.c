#include<stdio.h>
int main(){
    int sal;
    float net;
    printf("Enter Ram's basic salary");
    scanf("%d",&sal);
    net = sal-0.28* sal;
    printf("Net salary of ram is %f",net);
    return 0;

}