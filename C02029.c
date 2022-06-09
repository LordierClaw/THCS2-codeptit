#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int n;
    scanf("%d", &n);
    char a[n][n];
    char k = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            a[j][i] = k++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}