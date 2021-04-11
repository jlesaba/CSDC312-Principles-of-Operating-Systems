#include<stdio.h>

int main(){
    unsigned int N, K;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &K);
        int k[K];
        for(int j=0;j<K;j++)
            scanf("%d",&k[j]);
        int class[10] = {0,0,0,0,0,0,0,0,0,0};
        for(int j=0; j<K;j++){
            if(k[j] >= 0 && k[j] <= 9)
                class[0]+=1;
            else if(k[j] >= 10 && k[j] <= 19)
                class[1]++;
            else if(k[j] >= 20 && k[j] <= 29)
                class[2]++;
            else if(k[j] >= 30 && k[j] <= 39)
                class[3]++;
            else if(k[j] >= 40 && k[j] <= 49)
                class[4]++;
            else if(k[j] >= 50 && k[j] <= 59)
                class[5]++;
            else if(k[j] >= 60 && k[j] <= 69)
                class[6]++;
            else if(k[j] >= 70 && k[j] <= 79)
                class[7]++;
            else if(k[j] >= 80 && k[j] <= 89)
                class[8]++;
            else if(k[j] >= 90 && k[j] <= 99)
                class[9]++;
        }
        printf("CASE %d:\n", i+1);
        unsigned int lb = 0;
        unsigned int ub = 9;
        unsigned int index = 0;
        while(ub <= 99){
            if(lb < 10)
                printf(" %d- %d: ", lb, ub);
            else
                printf("%d-%d: ",lb,ub);
            for(int j=0; j<class[index];j++)
                if(j > 1 && (j+1)%5 == 1)
                    printf("-|");
                else
                    printf("|");
            printf("\n");
            lb += 10;
            ub += 10;
            index++;
        }
    }
    return 0;
}