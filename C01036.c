#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 1;
    while(n > 0) {
        sum *= n%10;
        n /= 10;
    }
    printf("%d", sum);
}