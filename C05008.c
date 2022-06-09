#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m][n];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        int maxr = 0, maxc = 0, r = 0, c = 0;
        for(int i = 0; i < m; i++) {
            int sum = 0;
            for(int j = 0; j < n; j++) {
                sum += a[i][j]; 
            }
            if (sum > maxr) {
                maxr = sum;
                r = i;
            }
        }
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0; j < m; j++) {
                if (j == r) continue;
                sum += a[j][i]; 
            }
            if (sum > maxc) {
                maxc = sum;
                c = i;
            }
        }

        printf("Test %d:\n", x);
        for(int i = 0; i < m; i++) {
            if (i == r) continue;
            for(int j = 0; j < n; j++) {
                if (j == c) continue;
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}