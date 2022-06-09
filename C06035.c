#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(char s[]) {
    int len = strlen(s);
    int change = 0;
    for(int i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) {
            if (change == 0) change = 1;
            else return 0;
        }
    }
    if (change == 0 && len % 2 == 0) return 0;
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        char s[1000];
        gets(s);
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
}