//Permutations
#include <iostream>
#include <string>
#include <cstring>
int main() {
    int N;
    scanf("%d", &N);
    if(N == 3||N == 2) printf("NO SOLUTION");
    else{
        for(int i = 2; i< N+1; i+=2)
            printf("%d ", i);
        for(int i = 1; i< N+1; i+=2)
            printf("%d ", i);
    }
}
