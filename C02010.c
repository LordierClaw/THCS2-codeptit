#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    for(int i = 1; i <= r; i++) {
        if (i <= c) {
            for(int j = i; j <= c; j++) printf("%d", j);
            for(int j = i-1; j >= 1; j--) printf("%d", j);
        } else {
            printf("%d", i);
            for(int j = c-1; j >= 1; j--) printf("%d", j);
        }
        printf("\n");
    }
}