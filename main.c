#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Inserisci operazione (es. 3 + 2): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("Risultato: %d\n", a + b); break;
        case '-': printf("Risultato: %d\n", a - b); break;
        case '*': printf("Risultato: %d\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Risultato: %d\n", a / b);
            else
                printf("Errore: divisione per zero\n");
            break;
        default: printf("Operatore non valido\n");
    }

    return 0;
}