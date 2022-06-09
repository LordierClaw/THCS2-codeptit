#include <stdio.h>

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    long long res = (long long)(b+a)*(b-a+1)/2;
    printf("%lld", res);
}