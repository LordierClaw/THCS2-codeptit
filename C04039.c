#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    ll x, y;
    while(scanf("%lld%lld", &x, &y) == 2) {
        ll d = llabs(y-x), k = 0, i = 0;
        while(k < d) {
            k += (i+1)/2;
            i++;
        }
        printf("%lld\n", i-1);
    }
}