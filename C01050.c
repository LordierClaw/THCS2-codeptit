#include <stdio.h>

int main() {
    int w, h;
    scanf("%d%d", &w, &h);
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if (i == 1 || i == h) printf("*");
            else {
                if (j == 1 || j == w) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}