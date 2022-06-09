#include <stdio.h>
#include <math.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(ll n) {
    ll m = 0, k = n;
    int sum = 0;
    int c6 = 0;
    while(k > 0) {
        if (k % 10 == 6) c6 = 1;
        sum += k % 10;
        m = m*10 + k % 10;
        k /= 10;
    }
    if (m == n && c6 == 1 && sum % 10 == 8) return 1;
    else return 0;
}

int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    if (a > b) {
        ll tmp = b;
        b = a;
        a = tmp;
    }
    for(ll i = a; i <= b; i++) {
        if (check(i)) printf("%lld ", i);
    }
}