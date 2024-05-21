#include <stdio.h>
#include <math.h>
#define DEG_TO_RAD(x) ((x) * M_PI / 180.0)

float conver(float x) {// vai fazer a conversão chamando a define. 
    return DEG_TO_RAD(x);
}
// Função com seno , cosseno e tangente
float seno(float x,catop,hip,sen) {// a função de seno já existe na biblioteca  matemática 
    return 
    sen = hip * sin(x);
    sen= sen /catop; 
}

float cosseno(float x) {
    return cos(x);
}

float tangente(float x) {
    return tan(x);
}

int main() {
    float x, rad, sen;
    int op;

    printf("Informe a Operação desejada\n");
    printf("1- Calcular o Seno do angulo\n");
    printf("2- Calcular o Cosseno do angulo\n");
    printf("3- Calcular a Tangente do angulo\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\nInsira o valor em Graus do angulo:");
            scanf("%f", &x);
            rad = conver(x);
            sen = seno(rad);
            printf("O SENO é de %.2f\n", sen);
            break;
        case 2:
            printf("\nInsira o valor em Graus do angulo:");
            scanf("%f", &x);
            rad = conver(x);
            printf("O COSSENO é de %.2f\n", cosseno(rad));
            break;
        case 3:
            printf("\nInsira o valor em Graus do angulo:");
            scanf("%f", &x);
            rad = conver(x);
            printf("A TANGENTE é de %.2f\n", tangente(rad));
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
