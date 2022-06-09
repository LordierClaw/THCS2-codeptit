#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", x);

        int b[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                b[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    b[i][j] += a[i][k] * a[j][k];
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }
}