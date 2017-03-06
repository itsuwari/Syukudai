#include "stdio.h"

int main(){
    float x, y;
	scanf("%f,%f", &x, &y);
	printf("x+y=%.2f\nx-y=%.2f\n",x+y, x-y);
	printf("x*y=%.2f\nx/y=%.2f\n",x*y, x/y);
}
