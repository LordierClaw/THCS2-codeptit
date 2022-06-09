#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 // 10^7
typedef long long int ll;

int n;
int a[11];

int pas(int n, int k) {
    if (k == 0 || k == n - 1) return 1;
    return pas(n - 1, k - 1) + pas(n - 1, k);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < i; k++) {
            printf("%d ", pas(i, k));
        }
        printf("\n");
    }
}