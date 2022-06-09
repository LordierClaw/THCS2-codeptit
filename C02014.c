#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    for(int i = -n+1; i <= n-1; i++) {
        for(int j = -n+1; j <= n-1; j++) {
            if (abs(j) <= abs(i)) printf("%d", abs(i)+1);
            else printf("%d", abs(j)+1);
        }
        printf("\n");
    }
}