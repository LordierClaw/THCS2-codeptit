#include <stdio.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

char a[105][105], tmp[105];

int cmp(char a[105], char b[105]){
    char c[105];
    char d[105];
    strcpy(c, a);
    strcpy(d, b);
    strcat(c, b);
    strcat(d, a);
    return (strcmp(c, d) < 0);
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%s", a[i]);
        }
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if (cmp(a[i], a[j]) == 0){
                    strcpy(tmp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], tmp);
                }
            }
        }
                
        for(int i = 0; i < n; i++) {
            printf("%s", a[i]);
        } 
        printf("\n");
    }
}