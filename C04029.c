#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int n, x = 1, a[102];

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void out() {
    printf("Buoc %d:", x);
    for(int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    x++;
}

int check(){
    for(int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) return 0;
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) swap(&a[j], &a[j+1]);
        }
        out();
        if (check()) break;
    }
}