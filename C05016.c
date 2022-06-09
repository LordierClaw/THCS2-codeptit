#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    int d = 0, cnt = 1;
    while (d < n/2) {
        for(int i = d; i < n-1-d; i++) a[d][i] = cnt++;
        for(int i = d; i < n-1-d; i++) a[i][n-1-d] = cnt++;
        for(int i = n-1-d; i > d; i--) a[n-1-d][i] = cnt++;
        for(int i = n-1-d; i > d; i--) a[i][d] = cnt++;
        d++;
    }
    if (n % 2 != 0) a[d][d] = cnt;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}