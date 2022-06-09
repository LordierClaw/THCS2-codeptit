#include <stdio.h>

int sum(int n) {
    int res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

int multi(int n) {
    int res = 0;
    for(int i = 2; i*i <= n; i++) {
        while(n % i == 0) {
            res += sum(i);
            n /= i;
        }
    }
    if (n > 1) res += sum(n);
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    if (multi(n) == sum(n)) printf("YES");
    else printf("NO");
}