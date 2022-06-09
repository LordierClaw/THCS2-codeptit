#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int n;
int a[100];
int cnt = 1;

void out(int k) {
    printf("Buoc %d:", cnt++);
    for(int i = 0; i <= k; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void issort() {
    for(int i = 1; i < n; i++) {
        int tmp = a[i];
        int j;
        for(j = i-1; j >= 0 && a[j] > tmp; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = tmp;
        out(i);
    }
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Buoc 0: %d\n", a[0]);
    issort();
}