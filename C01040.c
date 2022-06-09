#include <stdio.h>

int calc(int n) {
    int sum = 1, i;
    for(i = 2; i*i < n; i++) {
        if (n % i == 0) {
            sum += i + n/i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    if (calc(n) == n) printf("1");
    else printf("0");
}