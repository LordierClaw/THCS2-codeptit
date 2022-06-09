#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

ll f[100];
int k = 0;

void genfib() {
    f[0] = 0;
    f[1] = 1;
    k = 2;
    while(1) {
        f[k] = f[k-1] + f[k-2];
        if (k == 94) return;
        k++;
    }
}

int check(ll n) {
    for(int i = 0; i < k; i++) {
        if (f[i] == n) return 1;
    }
    return 0;
}

int main() {
    genfib();
    int T;
    scanf("%d", &T);
    while(T--) {
        ll n;
        scanf("%lld", &n);
        if (check(n)) printf("YES\n");
        else printf("NO\n");
    }
}