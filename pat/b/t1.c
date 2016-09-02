#include <stdio.h>

float save(float money){//Don't write main() function
	if(money < 500)
		printf("0\n");
	else if(money>= 500 && money < 1000)
		printf("%.2f\n", money*0.1);
	else if(money>= 1000 && money < 2000)
		printf("%.2f\n", money*0.2);
    else if(money>= 2000 && money < 3000)
        printf("%.2f\n", money*0.3);
    else
    	printf("%.2f\n", money*0.35);
}
int main()
{
    save(600);
    return 0;
}

