#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int res = a;
    if (b < res) res = b;
    if (c < res) res = c;
    printf("%d", res);
}