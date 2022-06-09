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
    for(int x = 1; x <= T; x++) {
        char s1[205], s2[25];
        gets(s1);
        gets(s2);
        int len2 = strlen(s2);
        printf("Test %d:", x);
        char *k = strtok(s1, " ");
        while(k != NULL) {
            int lenk = strlen(k);
            int check = 1;
            if (lenk == len2) {
                for(int i = 0; i < lenk; i++) {
                    if (tolower(k[i]) != tolower(s2[i])) {
                        check = 0;
                        break;
                    }
                }
            } else check = 0;
            if (check == 0) printf(" %s", k);
            k = strtok(NULL, " ");
        }
        printf("\n");
    }
}