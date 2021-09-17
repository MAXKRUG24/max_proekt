#include <stdio.h>
int main() {
    int x, y, r;
    printf("введите перве число:");
    scanf("%d", &x);
    printf("введите второе число:");
    scanf("%d", &y);
    r = (y - x);
    printf("%d", r);
    return 0;
}