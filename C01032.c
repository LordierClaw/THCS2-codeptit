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
        int k = 1;
        for(int i = 2; i*i <= n && n > 1; i++) {
            if (n % i == 0) k *= i;
            while(n % i == 0) {
                n /= i;
            }
        }
        if (n > 1) k *= n;
        printf("%d\n", k);
    }
}