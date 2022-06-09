#include <stdio.h>

int tn(long long n) {
    long long m = 0, h = n;
    while(n > 0) {
        int k = n % 10;
        m = m*10 + k;
        n /= 10;
    }
    if (m == h) return 1;
    else return 0;
}

int check(long long n) {
    if (tn(n) == 0) return 0;

    int sum = 0;
    while(n > 0) {
        int k = n % 10;
        if (k % 2 == 0) return 0;
        sum += k;
        n /= 10;
    }
    if (sum % 2 == 0) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if (check(n) == 1) printf("YES\n");
        else printf("NO\n");
    }
}