#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
	string line;
	string word[100];
	int i=0;


	getline(cin, line);
	stringstream ss(line);

	while(ss >> word[i++]);
 	for(int m = i-2; m > 0; m--) {
		cout << word[m] << " ";
	} 

	cout << word[0];
}