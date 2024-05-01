#include <bits/stdc++.h>

using namespace std;
 
void chuyendia(int N, char a, char b, char tg)
{
    if(N == 1)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        chuyendia(N-1, a, tg, b);
        chuyendia(1, a, b, tg);
        chuyendia(N-1, tg, b, a);
    }
}
int main()
{
    int N;
    cin >> N;
    cout << pow(2,N) -1 << endl;
    chuyendia(N, '1', '3', '2');
}
