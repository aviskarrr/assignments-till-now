#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %lf\n", area);
    return 0;
}







