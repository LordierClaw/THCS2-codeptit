#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = {};
    gets(a);
    int len = strlen(a);
    char tmp = a[0];
    a[0] = a[len-1];
    a[len-1] = tmp;
    int k = 0;
    for(int i = 0; i < len; i++) {
        if (a[i] != '0') {
            k = i;
            break;
        }
    }
    for(int i = k; i < len; i++) {
        printf("%c", a[i]);
    }
}