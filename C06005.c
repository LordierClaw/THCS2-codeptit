#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

struct dat{
    char s[1000];
    int cnt;
};

int main() {
    char s[10000];
    gets(s);
    int len = strlen(s);
    for(int i = 0; i < len; i++) s[i] = tolower(s[i]);
    
    struct dat a[1000];
    int n = 0;
    char *k = strtok(s, " ");
    while(k != NULL) {
        int check = 1;
        for(int i = 0; i < n; i++) {
            if (strcmp(k, a[i].s) == 0) {
                check = 0;
                a[i].cnt++;
                break;
            }
        }
        if (check == 1) {
            strcpy(a[n].s, k);
            a[n].cnt = 1;
            n++;
        }
        k = strtok(NULL, " ");
    }

    for(int i = 0; i < n; i++) {
        printf("%s %d\n", a[i].s, a[i].cnt);
    }
}