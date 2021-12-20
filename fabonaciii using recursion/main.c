#include<stdio.h>
int Fab(int);
int main()
{
    int n, i = 0, c;
    printf("Enter the number ");
    scanf("%d",&n);

    printf("Fibonacci series\n");

    for ( c = 1 ; c <= n ; c++ )
    {
        printf("%d\n", Fab(i));
        i++;
    }

    return 0;
}

int Fab(int n)
{
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fab(n-1) + Fab(n-2) );
}