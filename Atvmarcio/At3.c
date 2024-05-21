#include <stdio.h>
#include <math.h>
//Adryelle Caroline de Souza Calefi
//Tabata etiele roberto da silva

float derivada_elevada(float x, float k, float resposta)
{
printf("\n Você escolheu a derivada da operação F(X) = X elevado a K , sendo X uma variavel e k uma constante: \n ");
printf("Insira o valor de X: ");
scanf("%f" ,&x);
printf("Insira o valor de K: ");
scanf("%f" ,&k);

if (k < 1 && x == 0 )
 {       printf("A derivada de f(x) é indefinida para x = 0 e k < 1.\n");

    // Pois não podemos dividir por zero, logo não pode ser zero
 }
    else
{
      resposta = k * pow(x, k - 1);
   
}
    return printf(" f1(%.0f elevado a %.0f) = valor encontrado: %.4f\n",x,k, resposta); 

}

float derivada_ln(float x, float resposta)
{
printf("\n Você escolheu a derivada da operação F(X) = ln(x), sendo X uma variavel: \n ");
printf("Insira o valor de X: ");
scanf("%f" ,&x);
    if(x == 0 ) // se o x for 0 não existe , pois 1/0 não existe
    {
        printf("A derivada de ln(x) é indefinida para x = 0.\n");
    }
    else 
    {
        resposta = 1/x;
    }
    return printf(" f1(ln(%.0f)) = valor encontrado: %.2f\n",x, resposta);
}
float derivada_sin(float x, float resposta) 
{
    printf("\n Você escolheu a derivada da operação F(X) = sin(x), sendo X uma variavel: \n ");
    printf("Insira o valor de X em radianos: ");
    scanf("%f",&x);

    resposta = cos(x);
    return printf(" f1(sin(%.0f)) = valor encontrado: %.4f\n",x, resposta);
}
int main()
{
    float x, k, resposta;
    int op,s;

do{
    printf("\n MENU DE OPÇÕES\n");
    printf("1: F(x) = X elevado a K \n");
    printf("2: F(x) = ln(x) \n");
    printf("3: F(x) = sin(x) \n");
    printf("4: Sair!\n");
    scanf("%d" ,&op);

    switch (op)
    {
    case 1:
        resposta = derivada_elevada(x, k,resposta);
        break;
    case 2:
        resposta = derivada_ln(x, resposta);
        break;
    case 3:
        resposta = derivada_sin(x, resposta);
        break;
    case 4:
        printf("Saindo...");
        break;
    
    }
}
while(op != 4);

    return 0;
}