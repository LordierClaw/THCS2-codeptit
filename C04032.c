#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

typedef struct{
    char s[1000];
    int cnt;
} dat;

int checknum(char s[]) {
    int len = strlen(s);
    for(int i = 1; i < len; i++) {
        if (s[i] < s[i-1]) return 0;
    }
    return 1;
}

int cmp(const void *a, const void *b) {
    dat *ha = (dat *)a;
    dat *hb = (dat *)b;
    return (hb->cnt - ha->cnt);
}

int main() {
    char s[1000];
    dat a[1000];
    int n = 0, max = 0;
    while(scanf("%s", s) == 1) {
        int check = 1, i;
        for(i = 0; i < n; i++) {
            if (strcmp(s, a[i].s) == 0) {
                check = 0;
                break;
            }
        }
        if (check == 0) {
            a[i].cnt++;
        } else {
            int k = checknum(s);
            if (k == 1) {
                strcpy(a[n].s, s);
                a[n].cnt = 1;
                n++;
            }
        }
    }

    qsort(a, n, sizeof(dat), cmp);
    for(int i = 0; i < n; i++) {
        printf("%s %d\n", a[i].s, a[i].cnt);
    }
}