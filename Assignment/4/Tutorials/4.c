#include<stdio.h>
int main(){
    float a;
    printf("Enter your Percentage = ");
    scanf("%f",&a);
    if (a>=80)
    {
        printf("\nCongratulations!! You got Distinction.");
    }
    else if (a>=60&&a<80)
    {
        printf("\nCongratulations!! You got First Division. Target for Distinction next time.");
    }
    else if (a>=45&&a<60)
    {
        printf("\nCongratulations!! You got Second Division. Work Harder!!");
    }
    else if (a>=32&&a<45)
    {
        printf("\nCongratulations!! You got Third Division. Put more time into study to achieve more");
    }
    else
    {
        printf("\nYou failed the test :( Better Luck Next time");
    }

    return 0;
    
}