#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2*n-1; i+=2) {
        for(int j = i; j < 2*n-1; j+=2) {
            printf("~");
        }
        for(int j = -i+1; j <= i-1; j+=2) {
            printf("%d", i-abs(j));
        }
        printf("\n");
    }
}