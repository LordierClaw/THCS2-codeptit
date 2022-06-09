#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d", 2*n);
        
        if (t != 0)
            printf("\n");
    }
}