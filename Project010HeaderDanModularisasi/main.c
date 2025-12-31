#include <stdio.h>
#include "kalkulator.h"

int main() {
    struct operan_t data;

    data.operan1 = 10;
    data.operan2 = 5;

    printf("%.0f + %.0f = %.0f\n", data.operan1, data.operan2, tambah(&data));
    printf("%.0f - %.0f = %.0f\n", data.operan1, data.operan2, kurang(&data));
    printf("%.0f * %.0f = %.0f\n", data.operan1, data.operan2, kali(&data));
    printf("%.0f / %.0f = %.0f\n", data.operan1, data.operan2, bagi(&data));

    return 0;
}