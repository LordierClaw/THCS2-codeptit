#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d %d", n/365, n%365/7, n%365%7);
}