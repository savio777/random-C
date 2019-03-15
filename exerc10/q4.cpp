#include <stdio.h>
#include <math.h>

int main(void)
{
    float base, alt, area, diagonal;

    printf("de a base~> ");
    scanf("%f", &base);

    printf("altura~> ");
    scanf("%f", &alt);

    area = base*alt;
    
    diagonal = sqrt((base*base)+(alt*alt));

    printf("area~> %.1f\n", area);
    printf("diagonal~> %.1f\n", diagonal);


    return 0;
}