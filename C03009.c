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
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (a <= 1) a = 2;
    for(int i = a; i <= b; i++) {
        if (calc(i) == i) printf("%d ", i);
    }
}