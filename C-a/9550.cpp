#include "stdio.h"

int main(){
    int charx;
    scanf("%c", &charx);
    printf("字符:%c\n前导字符%c\n后续字符:%c", charx-1, charx, charx+1);
}
