#include "kalkulator.h"

double tambah(struct operan_t* p) {
    return p->operan1 + p->operan2;
}

double kurang(struct operan_t* p) {
    return p->operan1 - p->operan2;
}

double kali(struct operan_t* p) {
    return p->operan1 * p->operan2;
}

double bagi(struct operan_t* p) {
    if (p->operan2 == 0) return 0;
    return p->operan1 / p->operan2;
}