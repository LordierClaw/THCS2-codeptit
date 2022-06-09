#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%.15lf", 1.0/n);
        
        if (t != 0)
            printf("\n");
    }
}