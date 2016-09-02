/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/
/*
思路：将字符串用P和T分割成三部分
P前的A的个数乘以中间A的个数等于后面A的个数
*/

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
	int n, cp = 0, ca = 0, ct = 0, p1 ,p2, flag;
	char ch;
	scanf("%d", &n);


	while(n--){
		string s;
		cin >> s;
		cp = 0;
		ca = 0;
		ct = 0;
		flag = 0;
		
		//对s进行遍历，记录三个字母出现的次数，出现其他字符直接结束测试
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == 'P') cp++;
			else if(s[i] == 'A') ca++;
			else if(s[i] == 'T') ct++;
			else {
				printf("NO\n");
				flag = 1;
				break;
			}
		}

		if(flag == 1)
			continue;

		if(cp ==1 && ct == 1 && ca > 0) {
			p1 = s.find('P', 0);
			p2 = s.find('T', 0);

			if(p1 * (p2 - p1 -1) == (s.length() - p2 -1)) {
				printf("YES\n");
				continue;
			} else {
				printf("NO\n");
				continue;
			}
	
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
