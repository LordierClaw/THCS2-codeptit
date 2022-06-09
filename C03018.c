#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int calc(int n) {
    int res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

int isfibo(int n) {
    long long a1 = (long long)5*n*n+4;
    long long a2 = (long long)5*n*n-4;
    long long b1 = sqrt(a1);
    long long b2 = sqrt(a2);

    if (b1*b1 == a1 || b2*b2 == a2) return 1;
    else return 0;
}

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    if (a > b) {
        int tmp = b; 
        b = a;
        a = tmp;
    }
    for(int i = a; i <= b; i++) {
        if (isfibo(calc(i)) == 1 && isprime(i) == 1) printf("%d ", i);
    }
}