#include <cstdio>

int main() {
	int ge, shi, bai;
	int n;

	scanf("%d", &n);
	bai = n/100;
	shi = (n%100/10);
	ge = n%10;

	for(int i = 0; i < bai; i++) {
		printf("B");
	}
	for(int i = 0; i < shi; i++) {
		printf("S");
	}
	for (int i = 1; i <= ge; ++i)
		printf("%d", i);


	return 0;
}