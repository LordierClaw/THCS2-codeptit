#include <stdio.h>
#define MAXX 10000000

int a[MAXX+5];

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
    sieve(MAXX+2);
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 2; i <= MAXX && cnt < n; i++) {
        if (a[i] == 0) {
            printf("%d\n", i);
            cnt++;
        }
    }
}