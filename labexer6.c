#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double heronsArea(double sides[]){
    double s = (sides[0] + sides[1] + sides[2]) / 2;
    double area = sqrt(s * (s - sides[0]) * (s - sides[1]) * (s - sides[2]));
    return area;        
}

int comparator (const void * p1, const void * p2)
{
  return (*(double*)p1 - *(double*)p2);
}

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        double sides[3];

        for(int j=0; j<3; j++)
            scanf("%lf", &sides[j]);
        
        qsort(sides, 3, sizeof(double), comparator);
        
        printf("CASE %d: ", i+1);
        if((sides[0] + sides[1]) > sides[2]){
            printf("%0.3lf\n", heronsArea(sides));
        }
        else{
            printf("NO TRIANGLE FORMED\n");
        }

    }
    return 0;
}