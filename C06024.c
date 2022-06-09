#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 //10^7
typedef long long int ll;

char *add(char s1[],char s2[]){
    int n1 = strlen(s1), n2 = strlen(s2);
    char *s=malloc(1000);
    if (n1 < n2){
        for(int i = 0; i < n2-n1; i++) s[i] = '0';
        for(int i = n2-n1; i < n2; i++) s[i] = s1[i-n2+n1];
        s[n2] = 0;
        strcpy(s1, s);
        n1 = n2;
    } else if (n1 > n2){
        for(int i = 0; i < n1-n2; i++)s[i] = '0';
        for(int i = n1-n2; i < n1; i++) s[i] = s2[i-n1+n2];
        s[n1] = 0;
        strcpy(s2, s);
        n2 = n1;
    }

    int a = 0, sum;
    for(int i = n1-1; i >= 0; i--) {
        sum = s1[i] + s2[i] - '0' * 2 + a;
        s[i] = (char)(sum%10 + '0');
        a = sum/10;
    }
    if (a == 1) {
        n1++;
        for(int i = n1-1; i >= 1; i--) s[i] = s[i-1];
        s[0] = '1';
    }
    s[n1] = 0;
    return s;
}


int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        char s1[1000], s2[1000];
        scanf("%s", s1);
        scanf("%s", s2);
        printf("%s\n", add(s1,s2));
    }
}