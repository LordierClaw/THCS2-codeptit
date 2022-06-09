#include <stdio.h>

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    int c = a;
    if (b > a) c = b;
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            if (j <= b-i+1) printf("%c", 'A'+j+i-2);
            else printf("%c", 'A'+b-j);
        }
        printf("\n");
    }
}