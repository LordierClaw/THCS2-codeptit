#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    char s1[101], s2[101];
    gets(s1);
    gets(s2);
    char *k = strtok(s1, " ");
    while(k != NULL) {
        if (strcmp(k, s2) != 0) {
            printf("%s ", k);
        }
        k = strtok(NULL, " ");
    }
}