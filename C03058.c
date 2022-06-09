#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    ll k = a*b/gcd(a, b);
    return k;
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        ll res = 1;
        for(int i = 1; i <= n; i++) {
            res = lcm(res, (ll)i);
        }
        printf("%lld\n", res);
    }
}