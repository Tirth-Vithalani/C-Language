#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int i;
    float a, b, result;

    do {
        printf("----------------------\n")
        printf("Press 1 for + : \n");
        printf("Press 2 for - : \n");
        printf("Press 3 for * : \n");
        printf("Press 4 for / : \n");
        printf("Press 5 for %% : \n");
        printf("Press 0 for exit : \n");
        printf("----------------------\n");
        scanf("%d", &i);

        if (i != 0) {
            printf("Enter first number: ");
            scanf("%f", &a);

            printf("Enter second number: ");
            scanf("%f", &b);

            switch (i) {
                case 1:
                    result = add(a, b);
                    printf("%.0f + %.0f = %.0f\n", a, b, result);
                    break;
                case 2:
                    result = sub(a, b);
                    printf("%.0f - %.0f = %.0f\n", a, b, result);
                    break;
                case 3:
                    result = mul(a, b);
                    printf("%.0f * %.0f = %.0f\n", a, b, result);
                    break;
                case 4:
                    if (b != 0) {
                        result = div(a, b);
                        printf("%.2f / %.2f = %.2f\n", a, b, result);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                case 5:
                     result = mod(a,b);
					 printf("%d %% %d = %d\n", a, b, result);
                    break;
                default:
                    printf("Error: Invalid operator.\n");
            }
        }
    } while (i != 0);

    return 0;
}

