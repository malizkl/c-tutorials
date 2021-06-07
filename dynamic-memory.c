#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);

    int *b = (int*)malloc(sizeof(int)*5);
    b[0] = 10;
    b[1] = 11;
    b[2] = 12;
    b[3] = 13;
    b[4] = 14;

    for(int i=0;i<5;i++)
        printf("%d ",b[i]);
}

