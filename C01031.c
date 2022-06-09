#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    int cnt = 0;
    for(int i = 2; i*i <= n && n > 1; i++) {
        while(n % i == 0) {
            a[cnt++] = i;
            n /= i;
        }
    }
    if (n > 1) a[cnt++] = n;
    for(int i = 0; i < cnt; i++) {
        printf("%d", a[i]);
        if (i != cnt-1) printf("x");
    }
}