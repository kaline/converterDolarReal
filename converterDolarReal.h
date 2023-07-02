#include <stdio.h>


//Exercício para a próxima aula
//79
//• Faça um algoritmo e o programa correspondente
//que, dado o preço de um produto em reais,
//converta este valor para o equivalente em
//dólares. O preço do produto e a taxa de
//conversão para o dólar devem ser informados
//através do teclado.
//• Operador de multiplicação: *
//• Operador de divisão: /


float conversorReal(){
    float precoRealInicial;
    float precoDolarInicial;
    float taxaConversao;
    int op;
    
    scanf("%f %f %f %d", &precoRealInicial, &precoDolarInicial, &taxaConversao, &op);

    switch(op){
        case 1:
            float ValorDolar = precoRealInicial/taxaConversao;
            printf("$$%.2f\n", ValorDolar);
        break;
        case 2:
            float valorReal = precoDolarInicial*taxaConversao;
            printf(" R$%.2f\n", valorReal);
        break;
        default:
        break;
    }

    
    

    return 0;
    
    
}
