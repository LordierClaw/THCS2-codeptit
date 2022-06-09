#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    int check = 1, k = -1, h = -1, m;
    for(int i = 0; i < n-1; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        if (i == 0) {
            k = x;
            h = y;
        } else if (i == 1) {
            if (x == h || x == k) m = x;
            if (y == h || y == k) m = y;
        } else {
            if (x != m && y != m) check = 0;
        }
    }
    if (check == 1) printf("Yes");
    else printf("No");
}