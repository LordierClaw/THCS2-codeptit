#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    for(int i = 1; i <= r; i++) {
        for(int j = i; j <= c; j++) printf("%d", j);
        if (i <= c)
            for(int j = c-1; j >= c-i+1; j--) printf("%d", j);
        else
            for(int j = i; j > i-c; j--) printf("%d", j);
        printf("\n");
    }
}