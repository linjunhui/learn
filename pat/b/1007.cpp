/*
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
*/
/*
思路：d1 = 3-2 = 1;
1.先找出N内的所有素数
2.求相邻素数的差再判断
*/

#include <iostream>
#include <cmath>
#include <cstdio>

bool isPrime(int n) {
	int i = 2;
	if(n == 2) return true;
	while(i<=(sqrt(n)+1)) {
		if(n%i== 0)
			return false;
		i++;
	}
	return true;
}
int main() {
	int N, m = 0, count = 0;
	scanf("%d", &N);
	int prime[N];

	for(int i = 2; i <= N; i++){
		if(isPrime(i)) {
			prime[m++] = i;
		}
	}

	for(int i = 0;i < m; i++) {
		if(prime[i+1]-prime[i] == 2)
			count++;
	}
	printf("%d\n", count);

	return 0;
}