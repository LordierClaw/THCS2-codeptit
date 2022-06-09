#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    int sumUp = 0, sumDown = 0, minUp = MAXX, minDown = MAXX;
    while(T--) {
        int u, d;
        scanf("%d%d", &u, &d);
        sumUp += u;
        sumDown += d;
        if (u < minUp) minUp = u;
        if (d < minDown) minDown = d;
    }
    sumUp += minDown;
    sumDown += minUp;
    if (sumUp < sumDown) printf("%d", sumDown);
    else printf("%d", sumUp);
}