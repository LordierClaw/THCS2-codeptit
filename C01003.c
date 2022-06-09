#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld", (long long)n*n);
        
        if (t != 0)
            printf("\n");
    }
}