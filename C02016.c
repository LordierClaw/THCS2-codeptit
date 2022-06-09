#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    int k = 0;
    for(int i = 1; i <= n; i++) {
        int k = 1;
        if (i % 2 == 0) k = 2;
        for(int j = 1; j <= i; j++) {
            printf("%d", k);
            k += 2;
        }
        printf("\n");
    }
}