//     1
//    11
//   1221
//  123321
// 12344321

#include<stdio.h>

int main() {
    int i, j, k;

    
    for (i = 0; i<=4; i++) {
        for (k = 4 - i; k >0; k--) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        if(i==0){
            printf("%d",j);
        }

        j--;

        for (j = j; j>0; j--)
        {
            printf("%d",j);
        }
        
        
        printf("\n");
    }
    
    return 0;
}
