#include<stdio.h>
int main(){
    int n,sum=0;int count=0;
    float avg;
    printf("\nEnter n: ");
    scanf("%d",&n);
    while (n>0)
    {
        sum+=n;
        printf("\nEnter n: ");
        scanf("%d",&n);
        count++;
    }
    printf("%d",count);
    avg=(float)sum/count;
    printf("Sum = %d \n Average = %f",sum,avg);
    return 0;
    
}