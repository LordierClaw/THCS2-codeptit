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
        if (n % 2 != 0) {
            printf("0\n");
            continue;
        }
        if (n == 2) {
            printf("1\n");
            continue;
        }
        int res = 1;
        for(int i = 2; i*i <= n && n > 1; i++) {
            int cnt = 0;
            while(n % i == 0) {
                cnt++;
                n /= i;
            }
            if (i == 2) res = cnt;
            else res *= cnt+1;
        }
        if (n > 1) res *= 2;
        printf("%d\n", res);
    }
}