#include <stdio.h>

#define STEP 20
#define MAXF 300

float tempC(float F);

/* temperature conversion function */

int main()
{
    float F;
    F = 0;
    while(F <= MAXF)
    {
        printf("%3.2f \t %3.2f\n", F, tempC(F));
        F = F + STEP;
    }
    return 0;
}

float tempC(float F)
{
    float c;
    c = (5.0 / 9.0)*(F - 32);
    return c;
}
