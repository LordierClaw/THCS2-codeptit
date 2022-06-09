#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d%d", &n);
    long long a1 = (long long)5*n*n+4;
    long long a2 = (long long)5*n*n-4;
    long long b1 = sqrt(a1);
    long long b2 = sqrt(a2);

    if (b1*b1 == a1 || b2*b2 == a2) printf("1");
    else printf("0");
}