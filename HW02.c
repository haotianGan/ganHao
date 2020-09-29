#include <stdio.h>

int main(){
    //In C, everything is a numeric type. 
    //You have char, short, int, long, float, and double

    char myChar = 33; // [-128, 127] (1 bit)
    short myShort =0; // [-32768, 32767] aka [-2^16, +2^16-1] (2 bits)
    int myInt = 0; //4 bits
    long myLong = 0; //8 bits
    float myFloat = 0; //7 digits of precision
    double myDouble = 0; //14 digits of precision "double the precision of float"
    
    printf("Chars are printed using %%c. Like this: %c\n", myChar); //1 bit
    printf("Shorts are printed using %%d. Like this: %d\n", myShort); //2 bit
    printf("Ints are printed using %%d. Like this: %d\n", myInt); //4 bit
    printf("Longs are printed using %%ld. Like this: %d\n", myLong); //8 bit "Long short"
    printf("Floats are printed using %%f. Like this %f\n", myFloat); //7 digits of precision
    printf("Doubles are printed using %%lf. Like this %lf\n", myDouble); //14 digits of precision

    unsigned char myUnsignedChar = 123;
    printf("Check out this unsigned char: %ld \n", myUnsignedChar); //Casting char to double

    printf("Check out this undefined behavior: %d, %d, %d, %d, %d, %d, %d, %d\n");

    unsigned int myUnsignedInt = 1;
    float mySignedFloat = 4.09;
    long myResult = mySignedFloat / myUnsignedInt;
    long myOtherResult = myUnsignedInt / mySignedFloat;

    printf("%ld\n", myResult);
    printf("%ld\n", myOtherResult);

    printf("%ld", 32.1); //Why this result?
    printf("%ld", 32.1);
    printf("%ld", 32.1);
    printf("%ld", 32.1);
    printf("%ld\n", 32.1);

    long hello = mySignedFloat;
    printf("%ld",hello); //Truncated as expected
    printf("%ld",hello);
    printf("%ld",hello);
    printf("%ld",hello);

    return 0;
}   