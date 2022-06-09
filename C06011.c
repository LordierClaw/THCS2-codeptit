#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(char s[]) {
    int len = strlen(s);
    int sum = 0;
    for(int i = 0; i < len/2; i++) {
        if (s[i] != s[len-i-1]) return 0;
        sum += 2*(s[i]-'0');
    }
    if (s[0] != '8') return 0;
    if (sum % 10 != 0) return 0;
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