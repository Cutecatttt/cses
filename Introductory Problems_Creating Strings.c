#include <stdio.h>
#include <string.h>

int N, count, dem;
char X[10], Y[10], use[10], KQ[50000][10];

void luukq(){
    for(int i = 1; i <= N; i++){
        KQ[count][i] = Y[i];
    }
}
void Try(int i){
    for(int j = 0; j < N; j++){
        if(use[j] == 0){
            use[j] = 1;
            Y[i] = X[j];
            if(i == N){
                luukq();
                count++;
            }
            else Try(i+1);
            use[j] = 0;
        }
    }
}

void inkq(){
    for(int i = 1; i <= N; i++)
        printf("%c", KQ[0][i]);
    printf("\n");
    for(int i = 1; i < count; i++){
        int check_1 = 0;
        for(int j = 0; j < i; j++){
            int check_2 = 0;
            for(int k = 1; k <= N; k++)
                if(KQ[i][k]!=KQ[j][k])
                    check_2++;
            //printf("check_2=%d ", check_2);
            if(check_2 != 0) check_1++;
            }
        //printf("check_1=%d ", check_1);
        if (check_1 == i){
            for(int k = 1; k <= N; k++)
                printf("%c", KQ[i][k]);
            printf("\n");
            dem++;
        }
    }
}


int main() {
    scanf("%s", &X);
    N = strlen(X);
    Try(1);
    inkq();
    printf("%d", dem+1);
    return 0;
}
