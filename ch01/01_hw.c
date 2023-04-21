#include <stdio.h>
int main(void){
    float inch=0;
    float cm=0;
    printf("Please input inch value:");
    scanf("%f",&inch);
    cm=2.54*inch;
    printf("The corresponding cm value is:%f",cm);
    return 0;
}