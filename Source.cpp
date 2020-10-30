#include<stdio.h>
int M, N;
int deg(int m, int n) {
	int a = n;

	while (n < m) {
		n = n * a;
	}
	if (n == m)
		printf("true");
	else {
		printf("false");
	}
	return 0;
}


int main() {
	printf("Input N ");
	scanf("%d", &N);
	printf("Input M ");
	scanf("%d", &M);
	deg(M, N);
	return 0;
}