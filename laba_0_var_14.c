#include <stdio.h>
int main() {
    int x, y, r;
    printf("������� ����� �����:");
    scanf("%d", &x);
    printf("������� ������ �����:");
    scanf("%d", &y);
    r = (y - x);
    printf("%d", r);
    return 0;
}