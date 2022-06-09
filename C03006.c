#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i = 1;
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", i);
        for(int j = 2; j*j <= n; j++) {
            int cnt = 0;
            while(n % j == 0) {
                n /= j;
                cnt++;
            }

            if (cnt != 0) printf("%d(%d) ", j, cnt);
        }
        if (n > 1) printf("%d(1)", n);
        printf("\n");
    }
}