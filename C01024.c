#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, m = 0;
        scanf("%d", &n);
        m = n % 10;
        n /= 10;
        while(n > 10) {
            n /= 10;
        }

        if (m == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}