
#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

main() {
    for (int fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %9.2f\n", fahr, (5.0 * (fahr-32.0) / 9.0));
    }
}
