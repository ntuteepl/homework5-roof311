#include <stdio.h>
#include <math.h>

int main() {
    int minutes;
    double cost;

    printf("請輸入通話分鐘數：");
    scanf("%d", &minutes);

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes > 800 && minutes < 1500) {
        cost = minutes * 0.9  * 0.9;
    } else  {
        cost = minutes* 0.9 * 0.79;
    }



    printf("通話費用為：%.1f\n", cost);

    return 0;
}
