#include <stdio.h>

int main () {
	int A[10000];
	int X, N;

	scanf("%d",&N);
	scanf("%d",&X);
	for (int i=0;i<N;i++) {
		scanf("%d", &A[i]);

		if (A[i]<X) {
			printf("%d ",A[i]);
		}
	}
	return 0;
}
