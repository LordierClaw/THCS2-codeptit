#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
#define MAXX 10000000 // 10^7
typedef long long int ll;

char s1[105], s2[105];
char a1[105][105], a2[105][105];
int n1 = 0, n2 = 0;

int main() {
    gets(s1);
    gets(s2);
    char *k = strtok(s1, " ");
    while(k != NULL) {
        int check = 1;
        for(int i = 0; i < n1; i++) {
            if (strcmp(k, a1[i]) == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) strcpy(a1[n1++], k);
        k = strtok(NULL, " ");
    }

    k = strtok(s2, " ");
    while(k != NULL) {
        int check = 1;
        for(int i = 0; i < n2; i++) {
            if (strcmp(k, a2[i]) == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) strcpy(a2[n2++], k);
        k = strtok(NULL, " ");
    }

    for(int i = 0; i < n1-1; i++) {
        int min_id = i;
        for(int j = i+1; j < n1; j++) {
            if (strcmp(a1[i], a1[j]) > 0) min_id = j;
        }
        char tmp[100];
        strcpy(tmp, a1[i]);
        strcpy(a1[i], a1[min_id]);
        strcpy(a1[min_id], tmp);
    }

    for(int i = 0; i < n1; i++) {
        int check = 1;
        for(int j = 0; j < n2; j++) {
            if (strcmp(a1[i], a2[j]) == 0) {
                check = 0;
                break;
            }
        }
        if (check == 1) printf("%s ", a1[i]);
    }
}