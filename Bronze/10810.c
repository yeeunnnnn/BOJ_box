#include <stdio.h>

int main () {
    int N, M, i, j, k;
    scanf("%d %d",&N, &M);
    int arr[N];
    for (int a=0; a<N; a++) {
        arr[a] = 0;
    }
	  for (int b = 0; b<M; b++) {
				scanf("%d %d %d",&i, &j, &k);
				for(i; i<=j; i++) {
					arr[i-1] = k;
				}
		}
		for (int c=0; c<N; c++) {
				printf("%d ", arr[c]);
        }
    return 0;
}