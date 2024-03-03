#include <stdio.h>
#include <math.h>
#define N 200000

int m,n,k;
int X[N], Y[N];

int KQ(int X[],int Y[], int x){
    int count = 0;
    int z = 0;
    int i = 1;
    while(1){
        if(X[i] < Y[i+z]){
            count ++;
            i++;
            if(i == x) break;
        }
        else z++;
    }
    return count;
}

void sort(int a[], int n){
    int temp = 0;
    for(int i = 0; i < n-1; i++)
        for(int j = i; j < n; j++)
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main() {
    scanf("%d%d%d", &m, &n, &k);
    for(int i = 0; i < m; i++){
        scanf("%d", &X[i]);
        X[i] = X[i] - k;
    }
    for(int i = 0; i < n; i++)
        scanf("%d", &Y[i]);
    int x = fmin(m,n);
    sort(X,m); sort(Y,n);
    printf("%d", KQ(X,Y,x));
}
