#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) printf("%d ", a[i]);
    }
}