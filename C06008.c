#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    char s[101];
    gets(s);
    char a[100][101] = {};
    int cnt = 0;
    char *k = strtok(s, " ");
    while(k != NULL) {
        int check = 1;
        for(int i = 0; i < cnt; i++) {
            if (strcmp(k, a[i]) == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) {
            strcpy(a[cnt], k);
            printf("%s ", a[cnt++]);
        }
        k = strtok(NULL, " ");
    }
}