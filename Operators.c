#include <stdio.h>

int main() {
    int a = 10, b = 5, result;
    float div;
    int x = 1, y = 0;

    // Arithmetic Operators
    printf("=== Arithmetic Operators ===\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
    printf("Modulus: %d %% %d = %d\n\n", a, b, a % b);

    // Relational Operators
    printf("=== Relational Operators ===\n");
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n\n", a, b, a != b);

    // Logical Operators
    printf("=== Logical Operators ===\n");
    printf("(x && y) = %d\n", x && y);
    printf("(x || y) = %d\n", x || y);
    printf("(!x) = %d\n\n", !x);

    // Assignment Operators
    printf("=== Assignment Operators ===\n");
    result = a;
    printf("Initial result = %d\n", result);
    result += b;
    printf("After += : %d\n", result);
    result -= b;
    printf("After -= : %d\n", result);
    result *= b;
    printf("After *= : %d\n", result);
    result /= b;
    printf("After /= : %d\n", result);
    result %= b;
    printf("After %%= : %d\n\n", result);

    // Increment and Decrement Operators
    printf("=== Increment / Decrement Operators ===\n");
    printf("a = %d\n", a);
    printf("++a = %d\n", ++a);  // pre-increment
    printf("a++ = %d\n", a++);  // post-increment
    printf("After a++ : %d\n", a);
    printf("--a = %d\n", --a);  // pre-decrement
    printf("a-- = %d\n", a--);  // post-decrement
    printf("After a-- : %d\n\n", a);

    // Conditional (Ternary) Operator
    printf("=== Conditional (Ternary) Operator ===\n");
    result = (a > b) ? a : b;
    printf("Greater number between %d and %d is %d\n", a, b, result);

    return 0;
}
