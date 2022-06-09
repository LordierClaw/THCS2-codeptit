#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int n;
int a[100];
int cnt = 1;

void out() {
    printf("Buoc %d:", cnt++);
    for(int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void icsort() {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        out();
    }
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    icsort();
}