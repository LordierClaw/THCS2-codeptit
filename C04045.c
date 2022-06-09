#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        int cnt = 0, cOdd = 0, cEven = 0;
        char s[1000000];
        gets(s);
        char *k = strtok(s, " ");
        while(k != NULL) {
            cnt++;
            if (atoi(k) % 2 == 0) cEven++;
            else cOdd++;
            k = strtok(NULL, " ");
        }
        if (cnt % 2 == 0 && cEven > cOdd) printf("YES\n");
        else if (cnt % 2 !=0 && cOdd > cEven) printf("YES\n");
        else printf("NO\n");
    }
}