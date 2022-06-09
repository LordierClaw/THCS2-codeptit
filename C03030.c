#include <stdio.h>
#include <math.h>

int check(int n) {
    int last = 10;
    while(n > 0) {
        int k = n % 10;
        if (k > last) return 0;
        else last = k;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a = round(pow(10, n-1));
        int b = round(pow(10, n));
        for(int i = a; i < b; i++) {
            if (check(i) == 1) printf("%d ", i);
        }
        printf("\n");
    }
}