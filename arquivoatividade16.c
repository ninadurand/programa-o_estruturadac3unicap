aluna marina 
//Questao 1:
#include <stdio.h>
#include <stdlib.h>

int main (){


    FILE *arquivo;
    arquivo=fopen("Arq.txt","a");
    // Tava usando o tipo "a" e tava dando errado tem q usar o tipo " w " de write.
    // O tipo " a" funciona de forma de adicionar mais informações no arquivo ja existente.
    // Usar o write primeiro para criar um arquivo com deus dado iniciais e depois o a de add para adicionar mias informações 
    int numero_digitado;
    if(arquivo==NULL){
        printf("error");
    }
    printf("Digite caracteres para gravar no arquivo (digite '0' para finalizar):\n");
    // logica padrao de digitar um numero ate 0 e dar o break.
    while(1){
       scanf("%d",&numero_digitado);
       
       if(numero_digitado==0){
        break;
       }
       // f print funciona da mesma forma mas tem uma forma de escrita diferente. 
       fprintf(arquivo," %d ",numero_digitado);
       
       

    }
    // fechar arquivo e salva ele ;
    fclose(arquivo);
    

}

//Questao 3:
#include <stdio.h>
#include <string.h>


int main (){
    char palavra[50];
    char c;
    int qt_vogais= 0;

    //Abrir o arquivo e digitar algo dentro dele uma palavra por exemplo.
    FILE *arquivo;
    
    arquivo= fopen("quest2.txt","w");
    if(arquivo== NULL){
        printf("erro em abrir arquivo.");
        return 1;
    }
    //sempre se ligar na relaçao de (fprintf->printar no arquivo ,print printar no terminal)
    printf("Informe uma palavra para colocar no arquivo :\n");
    scanf("%[^\n]s",palavra);
    //aqui eu peguei uma palavra do terminal e coloquei dentro do arquivo com esse fprintf.
    fprintf(arquivo,"%s",palavra);
    // fechei o arquivo  para salvar as informações .
    fclose(arquivo);


    // Abri o arquivo para leitura agora invez de write no de cima .
    arquivo=fopen("quest2.txt","r");
    if(arquivo== NULL){
        printf("error em abrir arquivo.");
        return 1;
    }


    //fgetc lê o primeiro caractere do arquivo e o armazena em c.
    //enquanto o c=fgetc(arquivo) foi difenrente do final do arquivo(eof) o loop continua .
    while((c = fgetc(arquivo))!=EOF){
        if(c=='a'||c=='A'||c=='e'||c =='E'||c=='i'||c=='I'
        ||c=='o'||c=='O'||c=='u'||c=='U' )
            qt_vogais++;
    }
    
    printf("N de termos '%c' foi :%d",c,qt_vogais);
    fclose(arquivo);


}

//Questao 4: 
#include <stdio.h>

int main (){
    //primeiramente abre o arquivo para leitura e informarei uma palavra usando o W(write).
    FILE *arquivo;
    arquivo= fopen("arquivo_questao_4.txt","w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    char caracter;
    int q_t= 0 ;

    // escreve uma frase no arquivo.
    fprintf(arquivo,"exemplo para colocar no arquivo.");
    fclose(arquivo);// fechar arquivo apos escrever.


    // abre arquivo para leitura agora :
    arquivo=fopen("arquivo_questao_4.txt","r");
    if(arquivo==NULL){
        printf("error ao abrir arquivo.");
        return 1;
    }

    //solicita o caracter para ser buscado dentro do arquivo .
    printf("informe o caracter buscado dentro do arquivo:\n");
    scanf("%c",&caracter);

    
    

    while ((caracter = fgetc(arquivo)) != EOF) {
        if (caracter == ' ') { 
            q_t++;
        }
    }
    
    fclose(arquivo);

    //abre  de novo o arquivo para escrita.
    arquivo=fopen("arquivo_questao_4.txt","a");
    if(arquivo== NULL){
        printf("error em abrir arquivo");
        return 1 ;
    }
 
    
    fprintf(arquivo,"\nO caractere '%c' aparece %d vezes no arquivo.\n", caracter, q_t);
    fclose(arquivo);
}
//Questao 5:
#include <stdio.h>
#include <ctype.h>

void maiusc(FILE *arquivo1, FILE *arquivo2) {
    char c;
    while ((c = fgetc(arquivo1)) != EOF) {
        c = toupper(c);
        fputc(c, arquivo2);
    }
}

    


int main (){
    FILE *arquivo1;
    arquivo1=fopen("arquivo_1.txt","w");
    if(arquivo1== NULL){
        printf("error em abrir arquivo.");
    }
    char frase[30];
  
    printf("digite a frase q ficara dentro do arquivo .\n");
    scanf("%[^\n]s",frase);
    fprintf(arquivo1,"%s",frase);
    fclose(arquivo1);


    arquivo1 = fopen("arquivo_1.txt", "r");
    if (arquivo1 == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
   

    FILE *arquivo2;
    arquivo2 = fopen("arquivo_2.txt", "w");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        fclose(arquivo1);
        return 1;
    }
    maiusc(arquivo1, arquivo2);

    fclose(arquivo1);
    fclose(arquivo2);



    printf("Frase convertida para maiúsculas e salva em 'arquivo_2.txt'.\n");
}

//Questao 7 com struct:#include <stdio.h>

struct Usuario{
    char nome[30];
    int numero;
};

int main (){
    struct Usuario usuario;

    FILE *arquivo;
    arquivo = fopen("quest7_struct.txt","w");
    if(arquivo== NULL){
        printf(" nao foi possivel abrir arquivo.");
        return 1;
    }
  
    do{
        
        printf("Informe um nome e um numero para eu colocar dentro do arquivo.\n");
        printf("numero de celular:");
        scanf(" %d",&usuario.numero);
        
        if(usuario.numero!=0){
            printf("nome:");
            scanf(" %[^\n]s",usuario.nome);
            fprintf(arquivo," %s : %d\n", usuario.nome,usuario.numero);
            }
            
    }while(usuario.numero!=0) ;
    
    
    fclose(arquivo);
    return 0 ;

}
// Questao 7:
#include <stdio.h>


int main (){
    FILE *arquivo;
    arquivo=fopen("Arquivo_7.txt","w");
    if(arquivo==NULL){
        printf("error em abrir arquivo");
        return 0 ;
    }
    int numero_digitado;
    char nome[30];

    do{
        printf("informe o nome e um numero abaixo :\n");
        printf("nome:");
        scanf(" %[^\n]",nome);

        printf("Numero:");
        scanf("%d",&numero_digitado);

        fprintf(arquivo,"%s : %d\n",nome,numero_digitado);

    }while(numero_digitado!=0);

    fclose(arquivo);
}






//Questao 9:

#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
};

struct Contato {
    char nome[30];
    int telefone;
    struct Data data;
};

int main() {
    struct Contato contatos[100];
    FILE *arquivo;
    arquivo = fopen("arquivo9.txt", "w");
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }
    fclose(arquivo);
    int qt_contatos = 0;
    int UID;
    int numero_digitado;

    while (1) {
        printf("==== Informe uma das opções ====\n");
        printf("1 - Inserir contato\n");
        printf("2 - Remover contato\n");
        printf("3 - Pesquisar contato pelo nome\n");
        printf("4 - Listar todos os contatos\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &numero_digitado);

        switch (numero_digitado) {
            case 1: {
                arquivo = fopen("arquivo9.txt", "a");
                int i = qt_contatos;

                printf("Informe as informações do contato %d\n", i + 1);
                printf("Informe o nome: ");
                scanf(" %[^\n]s", contatos[i].nome);

                printf("Informe o número: ");
                scanf("%d", &contatos[i].telefone);

                printf("Informe o dia do aniversário: ");
                scanf("%d", &contatos[i].data.dia);

                printf("Informe o mês: ");
                scanf("%d", &contatos[i].data.mes);

                fprintf(arquivo, "Nome: %s\n", contatos[i].nome);
                fprintf(arquivo, "Número: %d\n", contatos[i].telefone);
                fprintf(arquivo, "Data de aniversário: %d/%d\n", contatos[i].data.dia, contatos[i].data.mes);
                fclose(arquivo);

                printf("Contato adicionado com sucesso.\n");
                qt_contatos++;
                break;
            }
            case 2: {
                if (qt_contatos == 0) {
                    printf("Não há contatos para remover.\n");
                    break;
                }

                for (int j = 0; j < qt_contatos; j++) {
                    printf("UID do contato: %d - Nome do(a) contato: %s\n", (j + 1) * 1831, contatos[j].nome);
                }

                printf("Insira o UID do contato a ser removido: ");
                scanf("%d", &UID);
                getchar();

                int index = (UID / 1831) - 1;
                if (index >= 0 && index < qt_contatos) {
                    for (int j = index; j < qt_contatos - 1; j++) {
                        contatos[j] = contatos[j + 1];
                    }
                    qt_contatos--;
                    printf("Contato removido com sucesso.\n");
                } else {
                    printf("UID inválido.\n");
                }
                break;
            }
            case 3: {
                if (qt_contatos == 0) {
                    printf("Não há contatos para buscar.\n");
                    break;
                }

                for (int j = 0; j < qt_contatos; j++) {
                    printf("UID do contato: %d - Nome do(a) contato: %s\n", (j + 1) * 1831, contatos[j].nome);
                }

                printf("Insira o UID do contato desejado: ");
                scanf("%d", &UID);
                getchar();

                int index = (UID / 1831) - 1;
                if (index >= 0 && index < qt_contatos) {
                    printf("Nome do contato buscado: %s\n", contatos[index].nome);
                    printf("Telefone do contato: %d\n", contatos[index].telefone);
                    printf("Data de aniversário: %d/%d\n", contatos[index].data.dia, contatos[index].data.mes);
                } else {
                    printf("UID inválido.\n");
                }
                break;
            }
            case 4: {
                arquivo = fopen("arquivo9.txt", "a");
                for (int j = 0; j < qt_contatos; j++) {
                    fprintf(arquivo, "Nome: %s\n", contatos[j].nome);
                    fprintf(arquivo, "Número: %d\n", contatos[j].telefone);
                    fprintf(arquivo, "Data de aniversário: %d/%d\n", contatos[j].data.dia, contatos[j].data.mes);
                }
                fclose(arquivo);
                printf("Contatos listados com sucesso.\n");
                break;
            }
            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    return 0;
}
