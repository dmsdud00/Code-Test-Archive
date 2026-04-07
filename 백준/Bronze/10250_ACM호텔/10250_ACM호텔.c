#include <stdio.h>
#pragma warning(disable: 4996)

int ACM_Hotel(int h, int w, int num) {

    int f_num = num % h;
    if (f_num == 0) f_num = h;      // 나누어 떨어질 경우 보정

    int r_num = ((num - f_num) / h) + 1;

    return (100 * f_num + r_num);
}

int main() {

    int testT, H, W, N;

    scanf("%d", &testT);

    for (int i = 0; i < testT; i++) {
        scanf("%d %d %d", &H, &W, &N);
        printf("%d\n", ACM_Hotel(H, W, N));
    }

    return 0;
}