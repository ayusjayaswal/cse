#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = n;i >= 1 ; i-- ) {
        for( int k = n; k > i; k-- ) { printf("%d ",k); }
        for( int j = 1; j <= (2*i-1); j+=1 ) { printf("%d ", i); } /*to print central repetition*/
        for( int k = i + 1; k <= n; k++ ) { printf("%d ",k); }
        printf( "\n" );
    }
    for (int i = 2; i <= n; i++) {
        for( int k = n;k > i ; k-- ) { printf("%d ",k );}
        for( int j = 1; j <= (2*i-1) ; j++ ){ printf("%d ",i);}
        for( int k = i + 1; k <= n ; k++ ) { printf("%d ",k);}
        printf("\n");
    }
    return 0;
}
