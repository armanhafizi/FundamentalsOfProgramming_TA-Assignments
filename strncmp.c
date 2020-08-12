#include<stdio.h>
int strncmp2( const char *lhs, const char *rhs, size_t count)
{
    int i = 0;
    for( i = 0; i < count; i++)
    {
        if( i >= strlen(rhs) || i >= strlen(lhs))
            break;
        if(lhs[i] < rhs[i])
            return -1;
        if(lhs[i] > rhs[i])
            return 1;
    }
    return 0;
}
int main()
{
    char A[100], B[100];
    gets(A);
    gets(B);
    int count = 0;
    scanf("%d", &count);
    printf("%d", strncmp2( A, B, count));
}
