#include <stdio.h>
int main() {
    int n;
    scanf_s("%d", &n);
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= i; j++)printf(" * ");
        for (int j = 1; j <= (n * 2 - 1) - (i * 2); j++)printf("   ");
        for (int j = 1; j <= i; j++)printf(" * ");
        printf("\n");
    }

    for (int i = 1; i <= 2 * n - 1; i++)printf(" * ");
    printf("\n");

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++)printf(" * ");
        for (int j = 1; j <= i * 2 - 1; j++)printf("   ");
        for (int j = 1; j <= n - i; j++)printf(" * ");
        printf("\n");
    }
    return 0;
}