//Quetsao 1:
#include <stdio.h>

int main() {
   char c;
   char *pc;
   c='A';
   pc = &c;
   printf("O endereço de c e o valor guardado por ele.\n");
   printf("O endereço de c é %p\n ",&c);
   printf("E o valor guardado nele é %c \n",c);

   printf("O valor que pc armazena e o valor guardado no endereço apontado por ele\n");
   printf("O valor que pc armazena:%p\n",pc);
   printf("O valor guardado no endereço apontado por ele :%c\n",*pc);

   printf("o endereço de pc é :%p",&pc);
   return 0 ;
}
//Quetsao 2 :
#include <stdio.h>

int main() {
    int numero=10;
    char nome='p';
    float nreal=0.5;

    int *ponteiro1;
    char *ponteiro2;
    float *ponteiro3;

    ponteiro1= &numero;
    ponteiro2= &nome;
    ponteiro3= &nreal;

    printf("endereço do ponteiro 1:%p\n", &ponteiro1);
    printf("endereço do ponteiro 2:%p\n", &ponteiro2);
    printf("endereço do ponteiro 3:%p\n", &ponteiro3);

    printf("\n\n");

    printf("o valor do endereço da variavel dentro do ponteiro1:%p\n",ponteiro1);
    printf("o valor do endereço da variavel dentro do ponteiro2:%p\n",ponteiro2);
    printf("o valor do endereço da variavel dentro do ponteiro3:%p\n",ponteiro3);
    printf("para provar que o endereço esta certo da variavel dentro do ponteiro variavel 3:%p",&nreal);

    printf("\n\n");

    printf("O valor guardado no endereço apontado por ele 1 :%d\n",*ponteiro1);
    printf("O valor guardado no endereço apontado por ele 2 :%c\n",*ponteiro2);
    printf("O valor guardado no endereço apontado por ele 3 :%f\n",*ponteiro3);

    *ponteiro1=18;
    *ponteiro2='c';
    *ponteiro3=0.10;
    printf("\n\n");
    printf("O valor guardado no endereço apontado por ele 1 :%d\n",*ponteiro1);
    printf("O valor guardado no endereço apontado por ele 2 :%c\n",*ponteiro2);
    printf("O valor guardado no endereço apontado por ele 3 :%f\n",*ponteiro3);

    printf("O valor da variavel dps das mudaça variavel1: %d\n",numero);
    printf("O valor da variavel dps das mudaça variavel2: %c\n",nome);
    printf("O valor da variavel dps das mudaça variavel3: %d\n",nreal);

    return 0;
}
//Questao extra invertendo os valores das variaveis por meio de ponteiros:
#include <stdio.h>
int main(){
    int a=10;
    int b=15;
    int *ponteiro1;
    int *ponteiro2;
    ponteiro1= &a;
    ponteiro2= &b;
    printf("valores inciais de A :%d\n",a);
    printf("valores inciais de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    printf("\n\n");

    int troca= *ponteiro1;
    *ponteiro1= *ponteiro2;
    *ponteiro2= troca;
    printf(" valor  de A :%d\n",a);
    printf(" valor  de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    return 0;

}
//Questao 3:
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("escreva um numero :\n");
    scanf("%d",&a);
    printf("escreva um segundo numero :\n");
    scanf("%d",&b);
    printf("O endereço onde a variavel 1 esta localizada na memoria é :%p\n",&a);
    printf("O endereço onde a variavel 2 esta localizada na memoria é :%p\n",&b);
    return 0 ;


}

//Questao 4:
#include <stdio.h>
void troca_devalores(int *ponteiro1,int *ponteiro2){
    int troca= *ponteiro1;
    *ponteiro1= *ponteiro2;
    *ponteiro2= troca;

}
int main(){
    int a=10;
    int b=15;
    int *ponteiro1;
    int *ponteiro2;
    ponteiro1= &a;
    ponteiro2= &b;
    printf("valores inciail de A :%d\n",a);
    printf("valores inciail de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    printf("\n\n");

    troca_devalores(ponteiro1, ponteiro2);
    printf(" valor  de A :%d\n",a);
    printf(" valor  de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    return 0;
    }

//4
#include <stdio.h>
int main(){
    int a=10;
    int b=15;
    int *ponteiro1;
    int *ponteiro2;
    ponteiro1= &a;
    ponteiro2= &b;
    printf("valores inciais de A :%d\n",a);
    printf("valores inciais de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    printf("\n\n");

    int troca= *ponteiro1;
    *ponteiro1= *ponteiro2;
    *ponteiro2= troca;
    printf(" valor  de A :%d\n",a);
    printf(" valor  de B :%d\n",b);
    printf("valores dentro da variavel apontado pelo pont1:%d\n",*ponteiro1);
    printf("valores dentro da variavel apontado pelo pont2:%d\n",*ponteiro2);
    return 0;

}
//5
#include <stdio.h>

void dobro(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
}

int main() {
    int a, b;

    printf("Informe o primeiro número inteiro (A):\n");
    scanf("%d", &a);
    printf("Informe o segundo número inteiro (B):\n");
    scanf("%d", &b);

    dobro(&a, &b);

    printf("O dobro de A é: %d\n", a);
    printf("O dobro de B é: %d\n", b);

    return 0;
}
