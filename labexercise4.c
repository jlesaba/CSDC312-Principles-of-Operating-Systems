#include <stdio.h>

int main(){
	int T, k;
    char c;
    scanf("%d", &T);                                        //cin >> T;
    for(int i=0; i<T; i++){
        scanf("%d %c", &k, &c);                              //cin >> k >> c;

        printf("CASE %d:\n", i+1);                             //cout << "CASE " << i+1 << " :" << endl;
        int row = 1;                                             //sets the start of row as 1
        while(row <= k){                                        //while loop as the number of rows increase to the height `k`
            for(int col=0; col < k-row; col++)                  //for loop to compute the number of columns where whitespace is printed
                printf(" ");                                  //prints whitespace
            if(row == 1)                                       //if statement for the first row
                printf("%c", c);//cout << c;                                      //prints one instance of `c`
            else                                                //else statement for succeeding rows
                for(int col=0; col < (row*2-1); col++)         //for loop to compute the number of colums where `c` is printed
                  printf("%c", c);//cout << c;                                    //prints `c`
            printf("\n");       //cout << endl;                                       //#prints a nextline (`\n`) character
            row++;  
        }  
    }
}
