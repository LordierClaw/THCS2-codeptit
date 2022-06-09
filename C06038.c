#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int n;
char s[65], a[65*2], b[65];

int check() {
    int x, sum;
    for(int i = 2; i <= n; i++) {
        x=0;
        sum=0;
        for(int j = n-1; j >= 0; j--) {
            sum = b[j] + s[j] - '0' * 2 + x;
            b[j] = sum%10+'0';
            x = sum/10;
        }
        if (strstr(a, b) == 0) return 0;
    }
    return 1;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        scanf("%s",s);
        n = strlen(s);
        strcpy(a, s);
        strcpy(b, s);
        strcat(a, s);
        if (check()) printf("YES\n");
        else printf("NO\n");
    }
}