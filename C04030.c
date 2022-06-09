#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int cmp(const void *a, const void *b) {
    return (*(int*)a - (*(int*)b));
}

int cmp2(const void *a, const void *b) {
    return (*(int*)b - (*(int*)a));
}

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n; i++) scanf("%d", &b[i]);
        qsort(a, n, sizeof(int), cmp);
        qsort(b, n, sizeof(int), cmp2);
        printf("Test %d:\n", x);
        for(int i = 0; i < n; i++) {
            printf("%d %d ", a[i], b[i]);
        }
        printf("\n");
    }

}