#include <stdio.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int check(char s[]) {
    int check = 1, last = 0;
    for(int i = 6; i < 12; i++) {
        if (s[i] != '.') {
            if (s[i]-'0' > last) last = s[i]-'0';
            else {
                check = 0;
            }
        }
    }
    if (check == 1) return 1;

    int same1 = 1, same2 = 1;
    for(int i = 6; i < 9; i++) {
        if (s[i] != s[6]) {
            same1 = 0;
            break;
        }
    }
    if (s[10] != s[11]) same2 = 0;
    if (same1 == 1 && same2 == 1) return 1;

    int c6 = 0, c8 = 0;
    for(int i = 6; i < 12; i++) {
        if (s[i] == '6') c6++;
        else if (s[i] == '8') c8++;
    }
    if (c6 + c8 == 5) return 1;
    return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    scanf("\n");
    while(T--) {
        char s[13];
        gets(s);
        if (check(s) == 1) printf("YES\n");
        else printf("NO\n");
    }
}