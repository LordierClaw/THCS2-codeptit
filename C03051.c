#include <stdio.h>
#include <math.h>
#define MOD 1000000007
#define MAXX 1000000 //10^6
typedef long long int ll;

int prime[MAXX+5];

void sieve(int n) {
    prime[0] = prime[1] = 0;
    for(int i = 2; i < n; i++) prime[i] = 1;
    for(int i = 2; i*i <= n; i++) {
        if (prime[i]) {
            for(int j = i*i; j <= n; j+=i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sieve(MAXX);
    int T;
    scanf("%d", &T);
    while(T--) {
        ll l, r;
        scanf("%lld%lld", &l, &r);
        int a = (int)sqrt(l), b = (int)sqrt(r);
        if (a*a < l) a++;

        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if (prime[i]) cnt++;
        }
        printf("%d\n", cnt);
    }
}