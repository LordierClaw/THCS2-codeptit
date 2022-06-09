#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    char last = 'a'-1;
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for(int j = 1; j <= i; j++) {
                printf("%c ", last+j);
            }
        } else {
            for(int j = i; j >= 1; j--) {
                printf("%c ", last+j);
            }
        }
        printf("\n");
        last += i;
    }
}