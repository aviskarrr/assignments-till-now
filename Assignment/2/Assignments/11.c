#include<stdio.h>
int main(){
    int a;int rp,pp;
    printf("Enter input in paisa");
    scanf("%d",&a);
    rp = a/100;
    pp = a%100;
    //pp = a-(rp*100);
    printf("%d\n%d",rp,pp);
    return 0;
}