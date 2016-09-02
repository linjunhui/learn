#include <stdio.h>
float ave(int a[])
{
	int sum = 0;
	float aver;

    int i, j, temp;

    for (j = 0; j < 9; j++)
        for (i = 0; i < 9 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }


	for(i = 1; i<9; i++)
		sum += a[i];



	aver = sum/8;
	sum = (int)aver*100;
	aver = (float)sum/100;
	printf("%.2f\n", aver);

	return aver;
	
}
int main(void)
{
	int a[10] = {91,92,84,79,99,93,85,0,83,81};
	printf("%f\n", ave(a));

}