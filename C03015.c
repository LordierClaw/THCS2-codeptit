#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        ll n;
        scanf("%lld", &n);
        ll res = 1;
        for(ll i = 2; i*i <= n && n > 1; i++) {
            if (n % i == 0) {
                if (i > res) res = i;
                while(n % i == 0) n /= i; 
            }
        }
        if (n > 1) {
            if (n > res) res = n;
        }
        printf("%lld\n", res);
    }
}