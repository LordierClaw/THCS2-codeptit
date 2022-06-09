#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int n, snt = 1;
        scanf("%d", &n);
        if (n >= 2) {
            for (int i = 2; i*i <= n; i++) {
                if (n % i == 0) {
                    snt = 0;
                    break;
                }
            }
        } else {
            snt = 0;
        }
        
        if (snt == 1) printf("YES\n");
        else printf("NO\n");
    }
}