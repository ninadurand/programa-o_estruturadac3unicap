//Questao 1:
#include <stdio.h>
int somatario(int numero){
    int resultado;
    if (numero==0){
        resultado = 0;

    }else{
        resultado = numero + somatario(numero-1);
    }
    return resultado;

}
int main(){
    int numero;
    int resultado;
    printf("Digite um numnero inteiro abaixo e eu irei informar o somatorio de 1 ate o numero digitado:\n");
    scanf("%d", &numero);
    resultado=somatario(numero);
    printf("O resultado é %d",resultado);
   
}

//Questão 2:
#include <stdio.h>
int fatorial(int numero,int resultado){
    if(numero==0){
        resultado =1;// Por que o fatorial de 0 é 1 :

    }else{
        resultado = numero * fatorial(numero-1,resultado);
    }
    return resultado;
}



int main(){
    int numero;
    int resultado;
    printf("informe um numero e eu irei lhe dizer o valor fatorial deste:\n");
    scanf("%d",&numero);

    resultado=fatorial(numero,resultado);
    printf("o resultado entao é %d",resultado);
    return 0;


}


//Questão 4:
#include <stdio.h>

void imprimir(int numero) {
    if (numero < 0) 
        return;
    
    imprimir(numero - 1); 
    printf("%d, ", numero);

int main() {
    int numero;
    printf("Informe um numero abaixo:\n");
    scanf("%d", &numero);
    imprimir(numero);
    return 0;
}



//Questão 5:
#include <stdio.h>

void imprimir(int numero) {
    if (numero < 0) 
        return;
    printf("%d, ", numero);
    imprimir(numero - 1); 
   

int main() {
    int numero;
    printf("Informe um numero abaixo:\n");
    scanf("%d", &numero);
    imprimir(numero);
    return 0;
}

