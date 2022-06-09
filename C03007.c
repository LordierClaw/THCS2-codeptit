#include <stdio.h>

int isprime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check(int n) {
    int m = n;
    int k = 0;
    while(m > 0) {
        k = k*10 + m%10;
        m /= 10;
    }
    if (k == n) return 1;
    else return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b; 
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if (isprime(i) == 1 && check(i) == 1) {
                printf("%d ", i);
                cnt++;
            }
            if (cnt == 10) {
                cnt = 0;
                printf("\n");
            }
        }
        printf("\n\n");
    }
}