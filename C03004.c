#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    int uc = gcd(a, b);
    long long bc = (long long)a*b/uc;
    printf("%d\n%lld", uc, bc);
}