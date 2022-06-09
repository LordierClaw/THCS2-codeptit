#include <stdio.h>

int a[1000000];

void sieve(int n) {
    a[0] = a[1] = 1;
    for(int i = 2; i*i <= n; i++) {
        if (a[i] == 0) {
            for(int j = i*i; j <= n; j+=i) {
                a[j] = 1;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sieve(n);
    for(int i = 2; i <= n; i++) {
        if (a[i] == 0) printf("%d\n", i);
    }
}