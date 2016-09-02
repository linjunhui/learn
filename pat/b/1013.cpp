/*
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103

*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

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
	int M, N, i=1, flag = 0, count = 0;
	scanf("%d%d", &N, &M);

	while(i++) {
		if(isPrime(i)){

			count++;
			if(count >= N && count <= M) {
				if(flag == 0)
					printf("%d", i);
				else 
					printf(" %d", i);
				flag++;
				if(flag == 10) {
					flag=0;
					printf("\n");
				}
				
			}
			if(count > M)
				break;


		}

	}


}