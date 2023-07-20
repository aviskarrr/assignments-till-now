#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter a Number");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("Prime No!");
    }
    else{
        printf("BOO");
    }
    return 0;
    
}