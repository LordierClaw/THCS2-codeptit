#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int k = (int) sqrt(n);
        if (k*k == n)
            printf("YES");
        else
            printf("NO");

        if (t != 0)
            printf("\n");
    }
}