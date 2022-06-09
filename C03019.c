#include <stdio.h>
#include <math.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(ll n) {
    ll m = 0, k = n;
    int sum = 0;
    while(k > 0) {
        sum += k % 10;
        m = m*10 + k % 10;
        k /= 10;
    }
    if (m == n && sum % 10 == 0) return 1;
    else return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        ll a = round(pow(10, n-1)), b = round(pow(10, n));
        ll cnt = 0;
        for(ll i = a; i < b; i++) {
            if (check(i)) cnt++;
        }
        printf("%lld\n", cnt);
    }
}