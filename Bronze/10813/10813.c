#include <stdio.h>

int main() {
    int N, M, i, j, em;

    scanf("%d %d",&N ,&M);
    int arr[101];
    for (int b=1; b<=N; b++) {
        arr[b] = b;
    }

    for (int a=0; a<M; a++) {
        scanf("%d %d", &i ,&j);
        em = arr[i];
        arr[i] = arr[j];
        arr[j] = em;
    }

    for (int c=1; c<=N; c++) {
        printf("%d ",arr[c]);
    }
    return 0;
}