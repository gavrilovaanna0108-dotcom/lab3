#include <stdio.h>
double calc(double U, double R);
void main() {
    double U, R, I;
    scanf("%lf", &U);
    scanf("%lf", &R);
    I=calc(U, R);
    printf("%.2lf",I);
}
double calc(double U, double R){
    return U/R;
}
