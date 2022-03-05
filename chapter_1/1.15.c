#include <stdio.h>

int converter(int cels)
{
    for (cels = 0; cels <= 300; cels += 20)
    {
        printf("%3d %6.1f\n", cels, (9.0 / 5.0) * (cels + 32));
    }
}

int main()
{
    printf(converter(0));
    return 0;
}