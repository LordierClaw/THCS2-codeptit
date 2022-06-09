#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int isprime(int n) {
    if (n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if (isprime(a[i][j])) sum += a[i][j];
        }
    }

    printf("%d", sum);
}