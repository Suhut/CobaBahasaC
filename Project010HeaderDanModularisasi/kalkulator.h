#ifndef KALKULATOR_H
#define KALKULATOR_H

struct operan_t {
    float operan1;
    float operan2;
};

double tambah(struct operan_t* p);
double kurang(struct operan_t* p);
double kali(struct operan_t* p);
double bagi(struct operan_t* p);

#endif