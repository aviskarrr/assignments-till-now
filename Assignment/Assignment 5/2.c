#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a); 

    if (a >= 'a' && a <= 'z') {
        a -= 32; 
    }

    printf("%c", a);

    return 0;
}
