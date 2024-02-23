//Number Spiral
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int x[t], y[t];
    for(int m = 0; m < t; m++)
        scanf("%d%d", &x[m], &y[m]);
    for(int m = 0; m < t; m++){   
        if(x[m] >= y[m]){
            int S = (x[m]-1)*(x[m]-1);
            if(x[m]%2 == 0)
                printf("%d ", S + 2*x[m] - y[m]);
            else
                printf("%d ", S + y[m]);
        }
        else{
            int S = (y[m]-1)*(y[m]-1);
            if(y[m]%2 == 1)
                printf("%d ", S + 2*y[m] - x[m]);
            else
                printf("%d ", S + x[m]);
        }
    }

    return 0;
}
