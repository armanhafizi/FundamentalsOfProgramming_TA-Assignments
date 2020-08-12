#include<stdio.h>
void mult(int A[5][4], int B[4][5])
{
    int i = 0, j = 0, k = 0;
    for( i = 0; i < 5; i++)
    {
        for( j = 0; j < 5; j++)
        {
            int sum = 0;
            for( k = 0; k < 4; k++)
                sum += A[i][k] * B[k][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}
void change( int A[5][4], int B[4][5], int n, int m)
{
    int i = 0;
    for( i = 0 ; i < 4; i++)
    {
        int tmp = 0;
        tmp = A[n-1][i];
        A[n-1][i] = B[i][m-1];
        B[i][m-1] = tmp;
    }
}
int main()
{
    int A[5][4], B[4][5];
    int i = 0, j = 0;
    for( i = 0; i < 5; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &A[i][j]);
    for( i = 0; i < 4; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &B[i][j]);
//    for( i = 0; i < 5; i++)
//    {
//        for(j = 0; j < 4; j++)
//            printf("%d ", A[i][j]);
//        printf("\n");
//    }
//    for( i = 0; i < 4; i++)
//    {
//        for(j = 0; j < 5; j++)
//            printf("%d ", B[i][j]);
//        printf("\n");
//    }
    int m = 0, n = 0;
    scanf("%d %d", &n, &m);
    mult(A, B);
    change(A, B, n, m);
    mult(A, B);
//    for( i = 0; i < 5; i++)
//    {
//        for(j = 0; j < 4; j++)
//            printf("%d ", A[i][j]);
//        printf("\n");
//    }
//    for( i = 0; i < 4; i++)
//    {
//        for(j = 0; j < 5; j++)
//            printf("%d ", B[i][j]);
//        printf("\n");
//    }
}
