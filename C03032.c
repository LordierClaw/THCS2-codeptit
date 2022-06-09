#include <stdio.h>

int isprime(int n) {
    if (n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check(int n) {
    if (isprime(n) == 0) return 0;
    while(n > 0) {
        if (isprime(n%10) == 0) return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b; 
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if (check(i) == 1) cnt++;
        }
        printf("%d\n", cnt);
    }
}