#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int isprime(int n) {
    if (n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            int inp;
            scanf("%d", &inp);
            if (isprime(inp) == 1) printf("%d ", inp);
        }
        printf("\n");
    } 
}