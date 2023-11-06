#include <stdio.h>
#include <math.h>

int main() {
    int H, M;
    float angle;
    scanf("%d %d", &H, &M);

    if (H < 1 || H > 12 || M < 0 || M > 59) {
        printf("輸入的時間不符合條件。\n");
        return 1;
    }

    float h = (H % 12) * 30 + M * 0.5;
    float m = M * 6;


    angle = fabs(h- m);

    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("%.3f\n", angle);

    return 0;
}
