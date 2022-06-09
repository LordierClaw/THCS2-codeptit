#include <stdio.h>

int calc(int n) {
    int res = 1;
    int i;
    for(i = 2; i*i < n; i++) {
        if (n % i == 0) {
            res += i + n/i;
        }
    }
    if (i*i == n) res += i;
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        if (calc(i) == i) printf("%d ", i);
    }
}