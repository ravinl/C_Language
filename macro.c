// Task-1 (Constants)

#include <stdio.h>

// #define pi 3.14
// #define num 239
// #define first 23
// #define second first + 24
#define PRINTINT(integer) printf("%d", integer);
#define PRINTSTR(string) printf("%s", string);

// #define square(x) x *x

// int main()
// {
//     // printf("Value of pi is: %f", pi);
//     // printf("Value of num is: %d", num++); // Will give error --> Reason: num is constant not a variable
//     // printf("Sum of %d and %d = : %d", first, second, (first + second));
//     printf("Square of 12 is: %d", square(12));
//     printf("Square of sum is: %d", square(2 + 4)); // It will become 2+4*2+4 which will become --> 14
//     return 0;
// }

// #if x == 0
// #define y 98
// #else
// #define y 2389
// #endif

// #define a 238

// int main()
// {
//     printf("Value of y is: %d\n", y); // 98 --> Reason: x is undefined Macro so it will intialised to 0

//     printf("Value of a is: %d\n", a); // 238

// #define a 23

//     printf("New value of a is: %d\n", a); // 23
//     return 0;
// }

// #define PRINT(s1, s2) printf("%s=%s\n%s=%s", #s1, s1, #s2, s2); // Here: # is preprocessor operator which will convert the parameter(passed) into an string literal
// In this case: #s1 will be converted into "str1", Reason: str1 is passed as an argument to macro (PRINT)
// #define fun(g1, g2) g1##g2 // ## is a macro which is used to concatenate

// int main()
// {
//     char *str1 = "GATE";
//     char *str2 = "CSE";

//     PRINT(str1, str2);       // str1=Gate str2=CSE
//     printf("%d", fun(1, 2)); // 12
//     return 0;
// }

// Program without main
// #define fun main

// int fun()
// {
//     printf("This function is without main");

//     return 0;
// }

// #define ONE

// int main()
// {
// #ifdef ONE
//     printf("GATE-2027");
// #else
//     printf("CSE");
// #endif

// #ifndef ONE
//     printf("GATE-2027");
// #else
//     printf("CSE");
// #endif
//     return 0;
// }

#define first
#define second

int main()
{
    // #ifdef first || second
    //     PRINTSTR("Atleast one is defined");
    // #else
    //     PRINTSTR("None is defined");
    // #endif

#ifndef first || second
    PRINTSTR("None is defined");
#else
    PRINTSTR("Either first or second is defined");
#endif
}