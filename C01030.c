#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int i = 2;
        while(n > 1 && i*i <= n) {
            while(n % i == 0) {
                n /= i;
                printf("%d ", i);
            }
            i++;
        }
        if (n > 1) printf("%d ", n);
        printf("\n");
    }
}