/*
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9

*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
	int m[1000];
	int kase = 0;
	int result[5] = {0};
	bool flag = true;
	int count[5] = {0};
	float aver;

	string line;

	getline(cin, line);

	stringstream ss(line);


	while(ss >> m[kase++]);

	 for(int i = 0; i < kase-1; i++) {
	 	if(m[i]%5 == 0 && m[i]%2 == 0){
	 		result[0] += m[i];
	 		count[0]++;
	 	}
	 	else if(m[i]%5 == 1) {
	 		result[1] = flag ? result[1] + m[i]:result[1] - m[i];
	 		flag = !flag;
	 		count[1]++;
	 	} else if(m[i]%5 == 2) {
	 		result[2]++;
	 		count[2]++;
	 	}
	 	else if (m[i]%5 == 3){
	 		result[3] += m[i];
	 		count[3]++;
	 	} else if(m[i]%5 == 4) {
	 		result[4] = m[i];
	 		count[4]++;
	 	}
	 }

	 aver = (float)result[3]/kase-1;

	 for(int i = 0;i < 5; i++) {
	 	if(i == 3)
	 	printf("%.1f\n", aver);
	 	else {
	 		if(count[i] != 0)
	 			printf("%d\n", result[i]);
	 		else
	 			printf("N\n");
	 	}



	 }

}