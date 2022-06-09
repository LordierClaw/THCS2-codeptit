#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(char s[]) {
    int len = strlen(s);
    for(int i = 0; i < len/2; i++) {
        if (s[i] != s[len-i-1] || (s[i] - '0') % 2 != 0 || (s[len-i-1] - '0') % 2 != 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        char s[501];
        gets(s);
        if (check(s) == 1) printf("YES\n");
        else printf("NO\n"); 
    }
}