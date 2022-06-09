#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0) {
        if (b == 0)
            printf("NO");
        else
            printf("%.2f", -1.0*c/b);
    } else {
        float dt = b*b - 4*a*c;
        if (dt < 0)
            printf("NO");
        else if (dt == 0)
            printf("%.2f", -1.0*b/(2*a));
        else
            printf("%.2f %.2f", (-b+sqrt(dt))/(2*a), (-b-sqrt(dt))/(2*a));
    }
}