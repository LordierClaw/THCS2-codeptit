#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    char s[200];
    gets(s);
    char *k = strtok(s, " ");
    char last[100], res[100];
    int cnt = 0;
    while(k != NULL) {
        int len = strlen(k);
        for(int i = 0; i < len; i++) k[i] = tolower(k[i]);
        res[cnt++] = k[0];
        strcpy(last, k);
        k = strtok(NULL, " ");
    }
    res[cnt-1] = 0;
    printf("%s%s@ptit.edu.vn", res, last);
}