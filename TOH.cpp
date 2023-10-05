#include <stdio.h>
#include <math.h>

void TOH(int n, char src, char aux, char dsn) {
    if (n==1)
    {
        printf("Move disc %d from %c to %c\n",n,src,dsn);
    }
    
    else if (n > 0) {
        TOH(n-1, src, dsn, aux);
        printf("Move disk %d from %c to %c\n", n, src, dsn);
        TOH(n-1, aux, src, dsn);
    }
}

void countMoves(int n) {
    int m = pow(2,n)-1;
    printf("Total number of moves: %d\n", m);
}

int main () {
    int n;
    scanf("%d", &n);
    TOH(n,'A','B','C');
    countMoves(n);
    return 0;
}
