#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a = sqrt(m);
    if (a*a != m) a += 1;

    printf("%d\n", (int)sqrt(n)-a+1);
    for(int i = a; i*i <= n; i++) {
        printf("%d\n", i*i);
    }
}