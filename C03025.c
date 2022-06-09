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

int check(int n) {
    if (isprime(n) == 0) return 0;
    int sum = 0;
    while(n > 0) {
        int k = n % 10;
        if (k != 2 && k != 3 && k != 5 && k != 7) return 0;
        sum += k;
        n /= 10;
    }
    return isprime(sum);
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if (check(i)) cnt++;
        }
        printf("%d\n", cnt);
    }
}