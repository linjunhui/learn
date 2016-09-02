#include <stdio.h>
int calculator(int n1,char op,int n2)
{
	if(op == '+'){
		printf("%d\n", n1+n2);
		return n1+n2;
	}
	else if(op == '-'){
		printf("%d\n", n1-n2);
		return n1-n2;
	}
	else if(op == '*'){
		printf("%d\n", n1*n2);
		return n1*n2;
	}
	else if(op == '/'){
		printf("%d\n", n1/n2);
		return n1/n2;
	}
	
}
int main(void)
{
	printf("%d\n", calculator(2,'+',3));

}