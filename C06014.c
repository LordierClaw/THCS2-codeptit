#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        char s[200];
        gets(s);
        char *k = strtok(s, " ");
        while(k != NULL) {
            k[0] = toupper(k[0]);
            int len = strlen(k);
            for(int i = 1; i < len; i++) k[i] = tolower(k[i]);
            printf("%s ", k);
            k = strtok(NULL, " ");
        }
        printf("\n");
    }
}