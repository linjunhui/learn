#include <stdio.h>
#include <math.h>
double f(double x)
{
	double y;
	int m;
	if(x < -10) {
		y = -x +5;
		printf("%.2lf\n", y);

	}
	else if(x>=-10 && x<= 10){
		y = 4*x -8;
		printf("%.2lf\n", y);

	}
	else if( x>10){
		y = sqrt(x);
		printf("%.2lf\n", y);
	}
		m = (int)y*100;
		y = (double)m/100;
		return y;
}
int main(void)
{
	printf("%lf\n",f(-11) );

}