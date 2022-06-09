#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int cnt = 1;
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Test %d:\n", cnt++);
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}