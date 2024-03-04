//Number Spiral
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    long long t;
    scanf("%lld", &t);
    long long x[t], y[t];
    for(int m = 0; m < t; m++)
        scanf("%lld%lld", &x[m], &y[m]);
    for(int m = 0; m < t; m++){   
        if(x[m] >= y[m]){
            long long S = (x[m]-1)*(x[m]-1);
            if(x[m]%2 == 0)
                printf("%lld ", S + 2*x[m] - y[m]);
            else
                printf("%lld ", S + y[m]);
        }
        else{
            long long S = (y[m]-1)*(y[m]-1);
            if(y[m]%2 == 1)
                printf("%lld ", S + 2*y[m] - x[m]);
            else
                printf("%lld ", S + x[m]);
        }
    }

    return 0;
}
