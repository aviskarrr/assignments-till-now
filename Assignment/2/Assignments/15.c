#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    float r,a,p;
    printf("Enter radius of circle");
    scanf("%f",&r);
    p = pow(r,2);
    a = PI * p;
    printf("The area of the circle is: %f\n", a);
    return 0;
}