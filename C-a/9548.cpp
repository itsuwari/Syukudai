#include "stdio.h"

int main(){
    int time=40000, h=0, m=0, s=0;
    scanf("%d", &time);
    printf("%d:%d:%d", time/3600, (time%3600)/60, ((time%3600)%60)%60);
}
