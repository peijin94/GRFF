#pragma once
#define me 9.10938291e-28
#define c 299792.458e5
#define e 4.80320451e-10
#define kB 1.3806488e-16
#define hPl 6.62607015e-27 //Planck constant h (without bar)
#define hPlbar (hPl/2/M_PI) //Planck constant h_bar
#define em_alpha (1.0/137.035999084)
#define AU 1.49599e13
#define sfu 1e-19
#define ieH 2.1798718e-11 //hydrogen ionization energy (theoretical), erg

void FindPlasmaDispersion(double f, double f_p, double f_B, double theta, int sigma,
	                      double *N, double *FZh, double *L, double *T, double *st_out, double *ct_out);
double Saha(double n0, double T0);