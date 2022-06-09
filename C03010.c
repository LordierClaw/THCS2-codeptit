#include <stdio.h>

int gt(int n) {
    int res = 1;
    for(int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int calc(int n) {
    int res = 0;
    while(n > 0) {
        res += gt(n%10);
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    scanf("%d%d", &n);
    for(int i = 1; i <= n; i++) {
        if (calc(i) == i) printf("%d ", i);
    }
}