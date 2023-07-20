// 123454321
//  1234321
//   12321
//    121
//     1

#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 5; i >= 1; i--) {
        for (k = 1; k <= 5 - i; k++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;
}