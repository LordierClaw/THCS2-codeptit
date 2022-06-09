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
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int check = 1;
            for(int j = i; j >= 0; j--) {
                if (a[j] > a[i]) {
                    check = 0;
                    break;
                }
            }
            if (check == 1) cnt++;
        }
        printf("%d\n", cnt);
    } 
}