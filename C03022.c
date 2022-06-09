#include <stdio.h>
#define MOD 1000000007
#define MAXX 100000 //10^5
typedef long long int ll;

int prime[MAXX+2];

void sieve(int n) {
    for(int i = 2; i <= n; i++) prime[i] = 1;
    for(int i = 2; i*i <= n; i++) {
        if (prime[i] == 1) {
            for(int j = i*i; j <= n; j+=i) prime[j] = 0;
        }
    }
}

int check(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 5 == 0);
}

int main() {
    int n;
    scanf("%d", &n);
    sieve(n);
    int cnt = 0;
    for(int i = 5; i < n; i++) {
        if (prime[i] && check(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
}