//1
#include <stdio.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("A string digitada é: %s\n", str);
    return 0;
}

//2
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Digite uma string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    printf("O comprimento da string é: %d\n", length);
    return 0;
}

//3
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("As strings são iguais.\n");
            return 0;
        }
        i++;
    }
    printf("As strings são diferentes.\n");
    return 0;
}

//4
#include <stdio.h>

int main() {
    char nome[100];
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("As 4 primeiras letras do nome são: %.4s\n", nome);
    return 0;
}

//5
#include <stdio.h>

int main() {
    char nome[100];
    int count = 0;
    printf("Digite um nome: ");
    scanf("%s", nome);
    while (nome[count] != '\0') {
        count++;
    }
    printf("O nome tem %d letras.\n", count);
    return 0;
}

//6
#include <stdio.h>

int main() {
    char nome[100], sexo;
    int idade;
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NÃO ACEITA\n");
    }
    return 0;
}

//7
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    printf("Digite uma string contendo 0s e 1s: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            count++;
        }
    }
    printf("O número de 1s na string é: %d\n", count);
    return 0;
}

//8
#include <stdio.h>

int main() {
    char str[100];
    printf("Digite uma string contendo 0s e 1s: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }
    printf("A string após a substituição é: %s\n", str);
    return 0;
}

//9
#include <stdio.h>

int main() {
    char nome[100];
    printf("Digite um nome: ");
    scanf("%s", nome);
    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("O nome é: %s\n", nome);
    }
    return 0;
}

//10
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("A palavra de trás para frente é: ");
    for (int i = strlen(palavra) - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
    return 0;
}
