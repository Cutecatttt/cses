//Weird Algorithm
#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    printf("%lld ", N);
    while(N!=1){
        if(N%2 == 0){
            N = N/2;
        }
        else
            N = N*3 +1;
        printf("%lld ", N);
    }
}
