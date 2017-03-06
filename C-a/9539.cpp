#include "stdio.h"
int main(){
    int a=5;
	double x=0;
	printf("%d %d\n", sizeof(int), sizeof(a));
	printf("%d %d\n", sizeof(double), sizeof(x));
	printf("%d %d\n", sizeof(float), sizeof(char));
}
