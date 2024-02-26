//Tower of Hanoi
#include<stdio.h>

void chuyendia(int N, char a, char b, char tg)
{
    if(N == 1)
    {
        printf("%c %c\n", a, b); 
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
    scanf("%d", &N);
    chuyendia(N, '1', '3', '2');
}
