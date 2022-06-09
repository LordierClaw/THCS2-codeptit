#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

struct dat{
    char s[1000];
    int cnt;
    int len;
};

int checkpal(char s[]) {
    int len = strlen(s);
    for(int i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) return 0;
    }
    return 1;
}

int main() {
    char s[1000];
    struct dat a[1000];
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
            if (a[i].len > max) max = a[i].len;
        } else {
            int k = checkpal(s);
            if (k == 1) {
                strcpy(a[n].s, s);
                a[n].cnt = 1;
                a[n].len = strlen(s);
                n++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if (a[i].len == max) printf("%s %d\n", a[i].s, a[i].cnt);
    }
}