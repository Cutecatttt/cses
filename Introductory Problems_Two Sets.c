//Two Sets
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N%4 == 1 || N%4 == 2) printf("NO");
    else{
        printf("YES\n");
        if(N%2==0){
            printf("%d\n", N/2);
            for(int i = 1; i <= N; i++)
                if(i%4 == 2 || i%4 == 3)
                    printf("%d ", i);
            printf("\n%d\n", N/2);
            for(int i = 1; i <= N; i++)
                if(i%4 == 0 || i%4 == 1)
                    printf("%d ", i);
        }
        else{
            printf("%d\n", N/2 + 1);
            for(int i = 1; i <= N; i++)
                if(i%4 == 1 || i%4 == 2)
                    printf("%d ", i);
            printf("\n%d\n", N/2);
            for(int i = 1; i <= N; i++)
                if(i%4 == 0 || i%4 == 3)
                    printf("%d ", i);
        }
    }
}
