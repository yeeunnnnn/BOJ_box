#include <stdio.h>

int main () {
	int N, max, min;
    

    scanf("%d", &N);
	int a[N];

	for (int i=0;i<N;i++) {
		scanf("%d", &a[i]);
	}
    min = a[0];
    for (int j=0; j<N; j++) {
        if (min > a[j]) {
            min = a[j];
        }    
    }
    printf("%d ",min);

    max = a[0];
    for (int k=0; k<N; k++) {
        if (max < a[k]) {
            max = a[k];
            
        }    
    }
    printf("%d",max);

    	return 0;
}
