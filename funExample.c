#include <stdio.h>

int sum (int a, int b) {
    return a + b;
}

int sub (int a, int b) {
    return a - b;
}

int (*get_operator(char* expression)) (int, int) {
    int i;

    for (i = 0; expression[i] != '\0'; i++) {
        switch (expression[i]) {
            case '+':
                return sum;
            case '-':
                return sub;
        }
    }
}

void print_operator(char* expression) {
    int (*operator)(int,int) = get_operator(expression);

    if (operator == sum) {
        printf("Expression %s is a sum.\n", expression);
    } else if (operator == sub) {
        printf("Expression %s is a sub.\n", expression);
    } else {
        printf("Expression %s has an unknown operation.\n", expression);
    }
}

int main() {
    char* expression1 = "2 + 2";
    char* expression2 = "7 - 6";
    char* expression3 = "8 * 2";

    print_operator(expression1);
    print_operator(expression2);
    print_operator(expression3);
}