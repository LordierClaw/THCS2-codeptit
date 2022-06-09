#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int check = 1;
        for(int i = 0; i < n/2; i++) {
            if (a[i] != a[n-i-1]) {
                check = 0;
                break;
            }
        }
        if (check == 1) printf("YES\n");
        else printf("NO\n");
    }
}