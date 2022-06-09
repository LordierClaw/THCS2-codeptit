#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a[2][4];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    if (a[0][0]>a[1][0]) {
        swap(&a[0][0], &a[1][0]);
        swap(&a[0][2], &a[1][2]);
    }
    if (a[0][1]>a[1][1]) {
        swap(&a[0][1], &a[1][1]);
        swap(&a[0][3], &a[1][3]);
    }

    int maxx, maxy;
    if (a[0][0] <= a[1][0] && a[1][2] <= a[0][2]) maxx = a[0][2]-a[0][0];
    else maxx = a[1][2] - a[0][0];
    if (a[0][1] <= a[1][1] && a[1][3] <= a[0][3]) maxy = a[0][3]-a[0][1];
    else maxy = a[1][3] - a[0][1];
    int max = maxx;
    if (max < maxy) max = maxy;
    printf("%d", max*max);
}