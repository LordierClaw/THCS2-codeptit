#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c1 = 0, c2 = 0;
    while(n > 0) {
        int k = n % 10;
        if (k % 2 == 0) c1++;
        else c2++;
        n /= 10;
    }
    printf("%d %d", c2, c1);
}