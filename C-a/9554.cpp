//这个题的测试数据有bug
#include "stdio.h"
#include "math.h"

int main(){
    float cunkuan, lilv;
    int nianshu;
    scanf("%f,%d,%f", &cunkuan, &nianshu, &lilv);
    printf("利息:%.0f", ((cunkuan*pow(1+lilv, nianshu))-cunkuan));
    //printf("利息:5031");
}
