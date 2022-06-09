#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    char s[55];
    scanf("%s",s);
    int n = strlen(s), a[55], cnt = 0;
    for(int i = 0; i < n; i++) {
        a[i]=1;
        for(int j = 0; j < i; j++) {
            if (s[i] > s[j] && a[i] < a[j]+1) a[i] = a[j]+1;
        }
        if (cnt < a[i]) cnt=  a[i];
    }
    printf("%d",26-cnt);
}