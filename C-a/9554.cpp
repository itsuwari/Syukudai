#include "stdio.h"
#include "math.h"

int main(){
    double cunkuan, lilv;
    int nianshu;
    scanf("%lf,%d,%lf", &cunkuan, &nianshu, &lilv);
    printf("利息:%.0f", cunkuan*pow((1.0+lilv), ((int)nianshu)));
}
