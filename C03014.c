#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int k = gcd(a, b);
        long long h = (long long)a*b/k;
        printf("%lld %d\n", h, k);
    }
}