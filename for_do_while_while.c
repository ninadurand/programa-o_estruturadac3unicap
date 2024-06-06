//1#include <stdio.h>

int main() {
    int notas[5];
    int i, aprovados = 0;

    printf("Digite as 5 notas dos alunos:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &notas[i]);
        if (notas[i] >= 7) {
            aprovados++;
        }
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}

//2#include 
<stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos dígitos do número é: %d\n", soma);

    return 0;
}

//3
#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Divisores de %d: ", numero);
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


//4
#include <stdio.h>

int main() {
    float altura, soma_alturas = 0;
    int i;

    printf("Digite a altura de 5 pessoas:\n");
    for (i = 0; i < 5; i++) {
        printf("Altura da pessoa %d: ", i + 1);
        scanf("%f", &altura);
        soma_alturas += altura;
    }

    float media_altura = soma_alturas / 5;
    printf("A média de altura das 5 pessoas é: %.2f\n", media_altura);

    return 0;
}

//5#
include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

//6
#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            soma += digito;
        }
        numero /= 10;
    }

    printf("A soma dos dígitos pares do número é: %d\n", soma);

    return 0;
}

//7
#include <stdio.h>

int main() {
    int numero, invertido = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("O número invertido é: %d\n", invertido);

    return 0;
}

//8
#include <stdio.h>

int main() {
    int numero = 1, soma = 0;

    while (numero <= 100) {
        soma += numero;
        numero++;
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}

//9
#include <stdio.h>

int main() {
    int numero = 1, produto = 1;

    while (numero <= 5) {
        produto *= numero;
        numero++;
    }

    printf("O produto dos números de 1 a 5 é: %d\n", produto);

    return 0;
}

//10
#include <stdio.h>

int main() {
    int i = 1;

    printf("Tabuada do 9:\n");
    while (i <= 10) {
        printf("9 x %d = %d\n", i, 9 * i);
        i++;
    }

    return 0;
}

//11
#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite uma sequência de números inteiros (digite 0 para parar):\n");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        }
        scanf("%d", &numero);
    }

    printf("Maior número digitado: %d\n", maior);
    printf("Menor número digitado: %d\n", menor);

    return 0;
}

//12
#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    printf("Digite uma sequência de números inteiros (digite -1 para parar):\n");
    scanf("%d", &numero);

    while (numero != -1) {
        soma += numero;
        contador++;
        scanf("%d", &numero);
    }

    if (contador == 0) {
        printf("Nenhum número foi digitado.\n");
    } else {
        float media = (float) soma / contador;
        printf("A média dos números digitados é: %.2f\n", media);
    }

    return 0;
}

//13
#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += digito * digito * digito;
        numero /= 10;
    }

    printf("A soma dos dígitos elevados ao cubo é: %d\n", soma);

    return 0;
}

//14
#include <stdio.h>

int main() {
    int numero = 1;

    printf("Números ímpares de 1 a 100:\n");
    while (numero <= 100) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}

//15
#include <stdio.h>

int main() {
    int numero = 1;

    printf("Múltiplos de 3 no intervalo de 1 a 50:\n");
    while (numero <= 50) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}


//16
#include <stdio.h>

int main() {
    int contador = 0, nota, i = 0;

    printf("Digite as 5 notas dos alunos:\n");
    while (i < 5) {
        scanf("%d", &nota);
        if (nota >= 7) {
            contador++;
        }
        i++;
    }

    printf("Quantidade de alunos aprovados: %d\n", contador);

    return 0;
}

//17

#include <stdio.h>

int main() {
    int numero, pares = 0;

    printf("Digite uma sequência de números inteiros (digite 0 para parar):\n");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            pares++;
        } else {
            break;
        }
        scanf("%d", &numero);
    }

    printf("Quantidade de números pares antes do primeiro ímpar: %d\n", pares);

    return 0;
}


