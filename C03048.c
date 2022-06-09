#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(ll n) {
    if (n % 2 != 0) return 0;
    int c1 = 0, c2 = 0;
    while(n > 0) {
        int k = n % 10;
        if (k % 2 == 0) c1++;
        else c2++;
        n /= 10;
    }
    if (c1 > c2) return 1;
    else return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll n;
        scanf("%lld", &n);
        if (check(n) == 1) printf("YES\n");
        else printf("NO\n");
    }
}