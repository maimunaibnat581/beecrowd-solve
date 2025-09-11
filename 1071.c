#include <stdio.h>

int main() {
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y) { int t = x; x = y; y = t;}

    for (x = x + 1; x < y; x++) {
        if (x % 2) sum += x;
    }

    printf("%d\n", sum);
    return 0;
}
