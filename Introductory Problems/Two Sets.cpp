#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    if(N%4 == 1 || N%4 == 2) printf("NO");
    else{
        printf("YES\n");
        if(N%2==0){
            cout << N/2;
            for(int i = 1; i <= N; i++)
                if(i%4 == 2 || i%4 == 3)
                    cout << i;
            printf("\n%d\n", N/2);
            for(int i = 1; i <= N; i++)
                if(i%4 == 0 || i%4 == 1)
                    cout << i;
        }
        else{
            printf("%d\n", N/2 + 1);
            for(int i = 1; i <= N; i++)
                if(i%4 == 1 || i%4 == 2)
                    cout << i;
            printf("\n%d\n", N/2);
            for(int i = 1; i <= N; i++)
                if(i%4 == 0 || i%4 == 3)
                    cout << i;
        }
    }
}
