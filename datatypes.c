#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    char type1;                 // 1 Byte ## -128 to 127 or 0 to 255

    unsigned char type2;        // 1 Byte ## 0 to 255

    signed char type3;          // 1 Byte ## -128 to 127

    int type4;                  // 2 or 4 Bytes ## -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647

    unsigned int type5;         // 2 ort 4 Bytes ## 0 to 65,535 or 0 to 4,294,967,295

    short type6;                // 2 Bytes ## -32,768 to 32,767

    unsigned short type7;       // 2 Bytes ## 0 to 65,535

    long type8;                 // 4(32bit OS) or 8 Bytes ## -9223372036854775808 to 9223372036854775807

    unsigned long type9;        // 8 Bytes ## 0 to 18446744073709551615

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);


    float type10;               // 4 Bytes ## 6 decimal places

    double type11;              // 8 Bytes ## 15 decimal places

    long double type12;         // 10 Bytes ## 18 decimal places

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}