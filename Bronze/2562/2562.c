#include <stdio.h>

int main() {

    int a[9];
    int N;
    int max = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", & a[i]);
        if (max < a[i]) {
            max = a[i];
            N = i;
        }
    }
    printf("%d\n%d", max, N + 1);
    return 0;
}