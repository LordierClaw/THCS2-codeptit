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
    int res = 0;
    int b[n];
    for(int i = 0; i < n; i++) {
        if (a[i] != -1) {
            int cnt = 1;
            for(int j = i+1; j < n; j++) {
                if (a[i] == a[j]) {
                    cnt++;
                    a[j] = -1;
                } 
            }
            if (cnt == 1) b[res++] = a[i];
            a[i] = -1;
        }
    }
    printf("%d\n", res);
    for(int i = 0; i < res; i++) {
        printf("%d ", b[i]);
    }
} 