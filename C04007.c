#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    int b[m];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    for(int i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
    for(int i = k; i < n; i++) {
        printf("%d ", a[i]);
    }
}