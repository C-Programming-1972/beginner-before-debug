/* This code contains bug/bugs that are intended to be solved...
    You are guaranteed that the Instructor's code (main() function) dosen't contains any bugs
    Only the code written by Sophia does.

    **CAUTION**
    You have rights to download and share this file to anyone but,
        YOU DON'T HAVE RIGHTS TO REPRODUCE OR REDISTRIBUTE THIS FILE IN ANY ONLINE FLATFORMS.
*/

#include <stdio.h>

// Sophia's Code
void temperatureConverter(double fahrenheit[], double celsius[], int n) {

    for(int i = 0; i < n; i++) {
        celsius[i] = (5/9) * (fahrenheit[i] - 32);
    }
}


// Instructor's code
int main() {

    // Variable delcarations
    double fahreheit[5] = {100.0, 120.0, 88.5, 68.4, 98.7};
    double celsius[5];
    int n = 5;

    // Call Sophia's function
    temperatureConverter(fahreheit, celsius, n);

    // Print temperatures
    for(int i = 0; i < n; i++) {
        printf("%lf F = %lf C\n", fahreheit[i], celsius[i]);
    }

    return 0;
}
