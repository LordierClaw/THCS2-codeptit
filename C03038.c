#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int calc(int n, int x){
    int res = 0;
    while(n) {
        res += n/x;
        n /= x;
    }
    return res;
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, p;
        scanf("%d%d", &n, &p);
        printf("%d\n", calc(n, p));
    }
}