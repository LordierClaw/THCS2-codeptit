#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(char s[]) {
    int len = strlen(s);
    if (s[0] == '0' && len > 1) return -1;

    int cO = 0, cE = 0;
    for(int i = 0; i < len; i++) {
        if ('0' > s[i] || '9' < s[i]) return -1;
        else {
            if ((s[i]-'0') % 2 == 0) cE++;
            else cO++;
        }
    }
    
    if(len % 2 == 0 && cE > cO) return 1;
    else if (len % 2 != 0 && cE < cO) return 1;
    else return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        char s[1000+5]= {};
        gets(s);
        int k = check(s);
        if (k == -1) printf("INVALID\n");
        else if (k == 1) printf("YES\n");
        else printf("NO\n");
    }
}