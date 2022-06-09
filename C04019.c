#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int c[30000+1] = {};
        int max = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (++c[a[i]] > max) max = c[a[i]];
        }

        for(int i = 0; i < n; i++) {
            if (c[a[i]] == max) {
                printf("%d ", a[i]);
                c[a[i]] = -1;
            }
        }
        printf("\n");
    }
}