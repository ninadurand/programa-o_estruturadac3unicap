//Questao 1:

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

struct Horario
{
    int hora;
    int minuto;
    int segundo;
};

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso
{   struct Data data;
    struct Horario horario;
    char nome_compromisso[30];
};

int main (){
    struct Horario horario1;
    struct Data    data1;
    struct Compromisso evento1;
    
    horario1.hora=14;
    horario1.minuto=30;
    horario1.segundo=45;

    data1.dia=27;
    data1.mes =05;
    data1.ano=2015;
    
    evento1.data=data1;
    evento1.horario=horario1;
    strcpy(evento1.nome_compromisso, "Reunião com o time de desenvolvimento");

    printf("O evento será: %s\n", evento1.nome_compromisso);
    printf("A data dele é: %02d/%02d/%04d\n", evento1.data.dia, evento1.data.mes, evento1.data.ano);
    printf("O horário dele é: %02d:%02d:%02d\n", evento1.horario.hora, evento1.horario.minuto, evento1.horario.segundo);



}   

//questao2;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dados{
    char nome[50] ;
    int idade ;
    char endereco[50];

};


int main (){
    struct Dados persona1;
    
    printf("infome o dados da persona:\n1- o nome: ");
    scanf(" %[^\n]s",persona1.nome);
    printf("2-idade:");
    scanf("%d",&persona1.idade);
    printf("3-O endereço da persona:");
    scanf(" %[^\n]s",persona1.endereco);

    printf("\n\n");
    printf("O nome digitado foi %s\n  a idade é %d \n e o endereço é %s",persona1.nome,persona1.idade,persona1.endereco);
    

     
    

}
//questao3;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[50];
    int matricula;
    char curso[25];

};

int main (){
    struct Aluno aluno1;
    struct Aluno aluno2;
    struct Aluno aluno3;
    struct Aluno aluno4;
    struct Aluno aluno5;
    struct Aluno alunos[5]={aluno1,aluno2,aluno3,aluno4,aluno5};
    for(int i = 0;i<5;i++){
        printf("informe os dados do aluno [%d]:1-nome:\n",i+1);
        scanf(" %[^\n]s",alunos[i].nome);

        printf("Matricula do aluno [%d]\n",i+1);
        scanf(" %d",&alunos[i].matricula);

        printf("Curso do aluno[%d]\n",i+1);
        scanf(" %[^\n]s",alunos[i].curso);
    }

    for(int i = 0;i<5;i++){
        printf(" Informacoes aluno[%d]:\n",i+1);
        printf(" Nome : %s\n",alunos[i].nome);
        printf(" Matricula : %d \n",alunos[i].matricula);
        printf(" Curso : %s",alunos[i].curso);
        printf("\n");

    }
    return 0;
}
//questao4;
#include <stdio.h>
#include <stdlib.h>


struct Cadastro{
    int matricula;
    char nome[20];
    int n1;
    int n2;
    int n3;
};

int main (){
    struct Cadastro aluno1;
    struct Cadastro aluno2;
    struct Cadastro aluno3;
    struct Cadastro aluno4;
    struct Cadastro aluno5;
    struct Cadastro alunos[5]={aluno1,aluno2,aluno3,aluno4,aluno5};

    int media;

    int aluno_maior_n1 =0 ;
    int maior_nota = -1;

    int maior_media_geral = -1;
    int aluno_maior_media=0;

    int menor_media_geral;
    int aluno_menor_media = 0;
    
    printf("=====Informe a informacoes dos alunos=====\n");
    //for para colocar todas as informaçoes dos alunos ;
    for(int i = 0 ;i<5;i++){
        printf("=== Aluno [%d] ===\n",i+1);
        printf("Informe a matricula do aluno ;");
        scanf(" %d",&alunos[i].matricula);
        
        printf("Informe o nome do aluno ; ");
        scanf(" %[^\n]s",alunos[i].nome);

        printf("infome a nota 1 :");
        scanf(" %d",&alunos[i].n1);
        // para saber quem tirou a maior notaa  na 1 prova 
         
        if (alunos[i].n1 > maior_nota) {
            maior_nota = alunos[i].n1;
            aluno_maior_n1 = i + 1;
        }
        
        printf("infome a nota 2 :");
        scanf(" %d",&alunos[i].n2);
        
        printf("infome a nota 3 :");
        scanf(" %d",&alunos[i].n3);
    
    }
    printf("\n\n");
    
    // para saber o aluno com a maior media
    for(int i = 0 ; i<5;i++){
        float media_atual = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;

        if (media_atual > maior_media_geral) {
            maior_media_geral = media_atual;
            aluno_maior_media = i + 1;
        }
    }
    // Para saber o aluno com a menor media 
    for(int i = 0 ; i<5;i++){
        float media_atual = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;

        if (media_atual < menor_media_geral) {
            menor_media_geral = media_atual;
            aluno_menor_media = i + 1;
        }

    }

    printf("O aluno com maior nota da primeira prova foi o aluno : [%d].\n",aluno_maior_n1);

    printf("o aluno com maior média geral  foi o aluno: [%d].\n",aluno_maior_media);

    printf("o aluno com menor média geral : [%d] .\n",aluno_menor_media);
    
    // para saber que reprovou ou nao 
    for( int i = 0 ;i <5;i++){
        media=(alunos[i].n1+ alunos[i].n2 +alunos[i].n3)/3;
        printf("O aluno %s [%d] foi ",alunos[i].nome,i+1);
        if(media<=6){
            printf("reprovado.\n");
        }else{
            printf("Aprovado\n");
        }
        printf("\n");
    }
}
