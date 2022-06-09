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

    for(int i = 0; i < n-1; i++) {
        int min_id = i;
        for(int j = i+1; j < n; j++) {
            if (a[j] < a[min_id]) min_id = j;
        }

        int tmp = a[min_id];
        a[min_id] = a[i];
        a[i] = tmp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
} 