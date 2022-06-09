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
        for(int i = 0; i < n; i++) {
            int inp;
            scanf("%d", &inp);
            if (inp % 2 == 0) printf("%d ", inp);
        }
        printf("\n");
    } 
}