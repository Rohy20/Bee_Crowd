#include <stdio.h>

int main() {
    int dias, anos, meses, diasRestantes;

    scanf("%d", &dias);

    anos = dias / 365;
    diasRestantes = dias % 365;

    meses = diasRestantes / 30;
    diasRestantes = diasRestantes % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", diasRestantes);

    return 0;
}
