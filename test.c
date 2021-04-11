#include<stdio.h>

int main(){
    double array[3];

    for(int i=0; i<3; i++)
        scanf("%lf", &array[i]);
    for(int i=0; i<3; i++)
        printf("%lf\n", array[i]);
}