#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

int main() {
    int t;
    scanf("%d", &t);
    scanf("\n");
    while(t--) {
        char a[201];
        gets(a);
        int cnt = 0;
        char * k = strtok(a, " ");
        while(k != NULL) {
            cnt++;
            k = strtok(NULL, " ");
        }
        printf("%d\n", cnt);
    }
}