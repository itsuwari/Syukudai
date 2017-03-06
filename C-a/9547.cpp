#include "stdio.h"

int main(){
    int time=40000, h=0, m=0, s=0;
	printf("%d:%d:%d", 40000/3600, (40000%3600)/60, ((40000%3600)%60)%60);
}
