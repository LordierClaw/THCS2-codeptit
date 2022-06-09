#include <stdio.h>

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    int c = a;
    if (b > a) c = b;
    for(int i = 1; i <= a; i++) {
        char k;
        for(int j = 1; j <= b; j++) {
            if (j > i) printf("%c", k);
            else {
                k = c-j+'a';
                printf("%c", k);
            }
        }
        printf("\n");
    }
}