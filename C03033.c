#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i = 1;
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        int check = 0;
        for(int j = 2; j*j <= n; j++) {
            int cnt = 0;
            while(n % j == 0) {
                n /= j;
                cnt++;
            }
            if (cnt != 0) {
                if (check == 0) {
                    printf("%d^%d ", j, cnt);
                    check = 1;
                } else {
                    printf("* %d^%d ", j, cnt);
                }
            } 
        }
        if (n > 1) {
            if (check == 0) {
                printf("%d^1 ", n);
                check = 1;
            } else {
                printf("* %d^1", n);
            }
        }
        printf("\n");
    }
}