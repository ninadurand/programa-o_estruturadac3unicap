//Questao1;
#include <stdio.h>


int main() {
  int vetor[10];
  int maior=0;
  for(int i =0;i<10;i++){
    printf("informe um  numero para o prenchimento do vetor:\n");
    scanf("%d",&vetor[i]);
    if(vetor[i]>maior){
        maior = vetor[i];
    }
  }
  printf(" o maior numero informado dentro do vetor é %d",maior);
}
//questao 2:
#include <stdio.h>


int main() {
  int vetor[10];
  int menor=2000000000;
  for(int i =0;i<10;i++){
    printf("informe um  numero para o prenchimento do vetor:\n");
    scanf("%d",&vetor[i]);
    if(vetor[i]<menor){
        menor = vetor[i];
    }
  }
  printf(" o menor numero informado dentro do vetor é %d",menor);
}

//Questao 3:
#include <stdio.h>

int buscarMaior(int vetor[], int tamanho) {
    int maior = vetor[0]; 
    int posicao = 0; 

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    return posicao;
}

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Informe um número para o preenchimento do vetor:\n");
        scanf("%d", &vetor[i]);
    }

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int posicao = buscarMaior(vetor, tamanho);

    printf("O maior número digitado para o vetor é: %d\n", vetor[posicao]);
    printf("O número foi encontrado na posição %d \n", posicao);

    return 0;
}



//Questao 4:
#include <stdio.h>

int main(){
    int vetor[10];
    int maior=0;
    int menor=2000000;
    int posicaoMaior;
    int posicaoMenor;
    for( int i =0;i<=10;i++){
        printf("informe um numero para o prencimento do ventor na posição :[%d]\n",i);
        scanf("%d",&vetor[i]);
        if(vetor[i]>maior){
            maior=vetor[i];
            posicaoMaior=i;
        }
        if(vetor[i]<menor){
            menor=vetor[i];
            posicaoMenor=i;
        }
}
    printf("O menor numero informado foi %d e a sua posição:%d\n",menor,posicaoMenor);
    printf("o maior numero informado foi %d  e a sua posição foi :%d\n",maior,posicaoMaior);
}
