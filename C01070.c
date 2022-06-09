#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 // 10^7
typedef long long int ll;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int check(int a, int b, int c, int d, int e, int f) {
    if (b == d && d == f && a + c + e == b) return 1;
    if (b == d && a + c == e && b + f == e) return 1;
    return 0;
}

int main() {
    int a[3][2], b[3];
    for (int i = 0; i < 3; i++) scanf("%d%d", &a[i][0], &a[i][1]);
    for (int i = 0; i < 3; i++) b[i] = i;
    int k = 0, s;
    while(1) {
        k = 0;
        s = check(a[b[0]][0], a[b[0]][1], a[b[1]][0], a[b[1]][1], a[b[2]][0], a[b[2]][1]);
        s += check(a[b[0]][0], a[b[0]][1], a[b[1]][0], a[b[1]][1], a[b[2]][1], a[b[2]][0]);
        s += check(a[b[0]][0], a[b[0]][1], a[b[1]][1], a[b[1]][0], a[b[2]][0], a[b[2]][1]);
        s += check(a[b[0]][0], a[b[0]][1], a[b[1]][1], a[b[1]][0], a[b[2]][1], a[b[2]][0]);
        s += check(a[b[0]][1], a[b[0]][0], a[b[1]][0], a[b[1]][1], a[b[2]][0], a[b[2]][1]);
        s += check(a[b[0]][1], a[b[0]][0], a[b[1]][0], a[b[1]][1], a[b[2]][1], a[b[2]][0]);
        s += check(a[b[0]][1], a[b[0]][0], a[b[1]][1], a[b[1]][0], a[b[2]][0], a[b[2]][1]);
        s += check(a[b[0]][1], a[b[0]][0], a[b[1]][1], a[b[1]][0], a[b[2]][1], a[b[2]][0]);
        if (s > 0) break;
        int i;
        for (i = 2; i >= 1; --i) {
            if (b[i] > b[i - 1]) {
                k = 1;
                break;
            }
        }
        if (k == 0) break;
        for (int j = 2; j >= 0; --j) {
            if (b[i - 1] < b[j]) {
                swap(&b[i - 1], &b[j]);
                break;
            }
        }
        for (int j = i; j < 2; ++j) {
            for (int z = j + 1; z < 3; ++z) {
                if (b[j] > b[z]) swap(&b[j], &b[z]);
            }
        }
    }
    if (s > 0) printf("YES");
    else printf("NO");
}