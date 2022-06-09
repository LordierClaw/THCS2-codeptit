#include <stdio.h>

int calc(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    if (sum % 10 == 0) return 1;
    else return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if (calc(n) == 1) printf("YES\n");
        else printf("NO\n");
    }
}