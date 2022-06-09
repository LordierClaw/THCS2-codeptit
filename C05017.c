#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 // 10^7
typedef long long int ll;

int t, m, n, a[105][105], b[105][105], x, y, dir;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &m, &n);
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                scanf("%d", &a[i][j]);
                b[i][j] = 0;
            }
        }
        for(int i = 0; i <= m+1; i++) {
            b[i][0] = 1;
            b[i][n+1] = 1;
        }
        for(int i = 0; i <= n+1; i++) {
            b[0][i] = 1;
            b[m + 1][i] = 1;
        }
        x = 1;
        y = 1;
        dir = 0;
        for(int i = 1; i <= m*n; i++) {
            b[x][y] = 1;
            printf("%d ", a[x][y]);
            x += dx[dir];
            y += dy[dir];
            if (b[x][y]) {
                x -= dx[dir];
                y -= dy[dir];
                dir = (dir + 1) % 4;
                x += dx[dir];
                y += dy[dir];
            }
        }
        printf("\n");
    }
}