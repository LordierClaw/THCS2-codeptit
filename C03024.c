#include <stdio.h>

int calc(int n) {
    int res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (calc(a) > calc(b)) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    printf("%d %d", a, b);
}