//Gray Code
#include <stdio.h>

int N, X[100];

void inkq(){
    for(int i = 1; i <= N; i++)
        printf("%d", X[i]);
    printf("\n");
}

void Try(int i){
    //Duyet cac kkha nang cua X[i]
    for(int j = 0; j <=1 ; j++){
        X[i] = j;
        if(i == N) inkq();
        else Try(i + 1);
    }
}

int main() {
    scanf("%d", &N);
    Try(1);

    return 0;
}
