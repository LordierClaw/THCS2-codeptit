#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        ll a[100];
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i <= n; i++) {
            a[i] = a[i-1] + a[i-2];
        }
        printf("%lld\n", a[n]);
    }
}