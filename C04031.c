#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    for(int x = 1; x <= T; x++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int max = 1, tmp = 1;
        for(int i = 1; i < n; i++) {
            if (a[i] <= a[i-1]) {
                if (tmp > max) max = tmp;
                tmp = 1;
            } else tmp++;
        }
        if (tmp > max) max = tmp;

        printf("Test %d:\n", x);
        printf("%d\n", max);
        for(int i = 0; i < n-max+1; i++) {
            int check = 1;
            for(int j = 1; j < max; j++) {
                if (a[i+j] <= a[i+j-1]) {
                    check = 0;
                    break;
                }
            }
            if (check == 1) {
                for(int j = 0; j < max; j++) printf("%d ", a[i+j]);
                printf("\n");
            }
        }
    }
}