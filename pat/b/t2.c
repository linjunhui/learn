#include <stdio.h>

void alaph(char ch){//Don't write main() function
	int n = ch - 'a';
	int i;
	for(i=n;i>=0;i--)
	printf("%c", i + 'a');
	for(i=25;i>n;i--)
		printf("%c", i + 'a');
	
}
int main()
{
    alaph('m');
    return 0;
}