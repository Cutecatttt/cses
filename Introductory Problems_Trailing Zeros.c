//Trailing Zeros
#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);
    int count = 0;
    for(int i = 1; i <= N; i++)
        if(i%5==0)
            count++;
    printf("%d", count);
}
