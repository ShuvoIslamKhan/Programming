#include<stdio.h>
int N = 5000;
bool isPrime( int i )
{
    for( int j = 2; j < i; j++ )
        {
            if( i % j == 0 )
                return false;
        }
int main()
{
       for( int i = 2; i <= N; i++ )
    {

        if( isPrime(i) == true )
        printf("%d ", i);
    }
return 0;
}
