#include <stdio.h>

int main () {
	int a,b;
	int sum = 0;
	int ary[100];
	
	scanf("%d",&a);
	for (int i=0; i < a; i++) {
		scanf("%d", &ary[i]);
	}
	scanf("%d",&b);
	for (int j=0; j < a; j++) {
		if (b == ary[j]) {
			sum += 1;
		}
	}
	printf("%d", sum);
return 0;
}
