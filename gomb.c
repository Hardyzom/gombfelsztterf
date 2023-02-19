#include <stdio.h>

int main() {

    float sugar;
    printf("Add meg a gomb sugarat (cm-ben): ");
    scanf("%f", &sugar);

    float felszin = 4 * (sugar*sugar)* 3.141592653589793;
    float terfogat = (4 * (sugar*sugar*sugar)*3.141592653589793)/3;

    printf("A gomb felszine: %f cm^3\n", felszin);
    printf("A gomb terfogata: %f cm^2\n", terfogat);

    return 0;
}