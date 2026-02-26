#include <stdio.h>
#include <stdlib.h>
void update(int *a, int *b) {
    int original_a = *a;
    *a = *a + *b;
    *b = abs(original_a - *b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);
    return 0;
}
