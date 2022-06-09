#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int i;
        int cnt = 0;
        for(i = 2; i*i < n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) cnt++;
                if ((n/i) % 2 == 0) cnt++;
            }
        }
        if (i*i == n && i % 2 == 0) cnt++;
        if (n % 2 == 0) cnt++;
        printf("%d\n", cnt);
    }
}