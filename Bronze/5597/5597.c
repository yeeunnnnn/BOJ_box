#include <stdio.h>

int main () {
    int arr[31], a;

    for (int i=1; i<=30; i++) {
        arr[i]=i;
    }
    for (int j=1; j<=30; j++) {
        scanf("%d", &a);
        if (arr[j]==a) {
            arr[j] = 0;
                }
    }
    for (int k=1; k<=30; k++) {
        if (arr[k]!=0) {
            printf("%d",arr[k]);
        }
    }
    return 0;
}