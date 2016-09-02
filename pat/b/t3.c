#include <stdio.h>
void test(int a[]){//Don't write main() function

	int m,i ;
	int n = 4;
	while(n--) {
		m = a[9];
		for(i=9;i>0;i--) {
		a[i] = a[i-1];
		}
		a[0] = m;	
	}
	for(i = 0; i<9;i++)
		printf("%d ", a[i]);
	printf("%d", a[9]);
	
}
int main()
{
    int a[10] = {2,6,9,8,5,3,7,4,1,12};
    test(a);
    return 0;
}