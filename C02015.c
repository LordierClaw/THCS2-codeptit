#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2*n-1; i+=2) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}