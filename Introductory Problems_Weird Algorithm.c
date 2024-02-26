//Weird Algorithm
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d ", N);
    while(N!=1){
        if(N%2 == 0){
            N = N/2;
        }
        else
            N = N*3 +1;
        printf("%d ", N);
    }
}
