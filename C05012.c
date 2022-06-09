#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        printf("Test %d:\n", x);
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) {
            int last = 0;
            for(int j = 1; j <= n; j++) {
                if (j <= i) last += j*j;
                printf("%d ", last);
            }
            printf("\n");
        }
        printf("\n");
    }
}