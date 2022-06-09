#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        printf("Test %d:\n",x);

        int n, m;
        scanf("%d%d",&n,&m);
        int a[n][m], cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                for(int p = i; p < n; p++) {
                    for(int q = j; q < m; q++) {
                        if (a[i][j] > a[p][q]) swap(&a[i][j], &a[p][q]);
                    }
                }
            }
        }
                        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}