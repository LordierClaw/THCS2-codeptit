#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int x, y;
    scanf("%d%d", &x, &y);
    x--; y--;
    for(int j = 0; j < n; j++) {
        int tmp = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = tmp;
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}