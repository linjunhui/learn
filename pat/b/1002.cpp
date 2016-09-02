/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/

#include <cstdio>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;
char num[100];
int result[3];
string nums[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main() {
	string line;

	if(!getline(cin, line)) return false;
	stringstream ss(line);


	char x,tmp;
	int n = 0;
	int sum = 0;
	while(ss >> x) {
		tmp = x - '0';
		num[n++] =  tmp;
	}

	for(int i = 0;i < 100; i++)
		sum += num[i];

	n = 0;
	while(sum/10 != 0) {
		result[n++] = sum%10;
		sum /= 10;

	}
	result[n] = sum;
	for(int i = n;i > 0; i--)
		cout << nums[result[i]] << " ";
	cout << nums[result[0]];
}