#include <stdio.h>
#pragma warning(disable: 4996)

void judge_tri(int a, int b, int c){

    int max, rest = 0;
    
    (a>b) ? ((a>c) ? (max = a) : (max = c) ) : ((b>c) ? (max = b) : (max = c));

    if (a!=max) {
        rest += a*a;
        if (b!=max) rest += b*b;
        else rest += c*c;
    }
    else rest = b*b + c*c;

    if ((max*max)== rest) printf("right\n");
    else printf("wrong\n");

}

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    while (A!=0 && B!=0 && C!=0){

        judge_tri(A, B, C);
        scanf("%d %d %d", &A, &B, &C);
    }

    return 0;
}