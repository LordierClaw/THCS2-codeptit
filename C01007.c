#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (b != 0)
        printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a+b, a-b, (long long)a*b, a/b, a%b ,1.0*a/b);
    else
        printf("0");
}