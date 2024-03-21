//Q1
#include <stdio.h>

int main(){
    int numero;
    printf("digite um numero ?");

    scanf("%d", &numero);
    if (numero == 0){
        printf("numero igual a zero ");
    }else if(numero > 0){
        printf ("%d é um numero positivo ", numero);
    }else{
        printf("%d é um numero negativo", numero);
    }    
    return 0;
}
//Q2
#include <stdio.h>

int main(){
    int idade;
    printf("qual sua idade ? ");
    scanf("%d",&idade );
    if(idade >=18 ){
        printf("voce eh maior de idade ");
    }else{
        printf("voce eh menor de idade");  
    }

    return 0;
}
//Q3
#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("digite o primeiro numero");
    scanf("%d",&numero1 );

    printf("digite o segundo numero ");
    scanf("%d",&numero2);

    if(numero1 > numero2 ){
        printf("%d eh maior que %d ",numero1,  numero2);
    }else if(numero1 < numero2 ){
        printf("%d eh maior que %d ",numero2 , numero1);
    }else{
        printf("numeros iguais");  
    }

    return 0;
}
//Q4
#include <stdio.h>

int main(){
    int numero1;

    printf("digite um numero");
    scanf("%d",&numero1 );

    if(numero1 % 2 == 0 ){
        printf("%d eh par",numero1);
    }else{

        printf("numero inpar");  
    }

    return 0;
}
//Q5
#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;

    printf("digite primeira nota");
    scanf("%d",&nota1 );

    printf("digite segunda nota");
    scanf("%d",&nota2 );

    printf("digite terceira nota");
    scanf("%d",&nota3 );



    if(nota1 + nota2 + nota3 >= 21 ){
        printf("aluno aprovado por media");
    }else{

        printf("aluno reprovado");  
    }

    return 0;
}
//Q6
#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100]; 
    char nome2[100];
    
    
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    
    int tamanho_nome1 = strlen(nome1);
    int tamanho_nome2 = strlen(nome2);

    
    if (tamanho_nome1 > tamanho_nome2) {
        printf("%s eh maior que  %s\n", nome1, nome2);
    } else if (tamanho_nome1 < tamanho_nome2) {
        printf("%s eh maior que %s\n", nome2, nome1);
    } else {
        printf("Os nomes têm o mesmo número de caracteres\n");
    }

    return 0;
}
//Q7
#include <stdio.h>

int main() {
    char letra; 
    
    printf("Digite a letra: ");
    scanf("%c", &letra );
    
    
    if (letra == 'a'|| letra == 'e'|| letra== 'i'|| letra== 'o'||letra=='u') {
        printf("%c eh uma vogal",letra);
    } else if (letra=='A'|| letra =='E'|| letra=='I'|| letra=='O'||letra=='U') {
        printf("%c eh uma vogal", letra);
    } else {
        printf("%c eh uma consoante",letra);
    }
    
return 0;
}
//Q8
#include <stdio.h>

int main() {
    int n1; 
    int n2;
    int n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1 );

    printf("Digite o segundo numero: ");
    scanf("%d", &n2 );

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3 );
    
    
    if (n1>n2 && n2>n3 )  {

        printf("%d,%d,%d",n1,n2,n3);

    } else if (n1>n3 && n3>n2){

        printf("%d,%d,%d",n1,n3,n2);

    }else if(n2>n1 && n1>n3){

        printf("%d,%d,%d",n2,n1,n3);

    }else if(n3>n1 && n1>n2 ){

        printf("%d,%d,%d",n3,n1,n2);

    }else if(n3>n2 && n2>n1 ){

        printf("%d,%d,%d",n3,n2,n1);

    }else{

        printf("%d,%d,%d",n2,n3,n1);
    }
    
return 0;
}
//Q9

//Q10
#include <stdio.h>

int main() {
    int num ; 

    printf("Digite o numero: ");
    scanf("%d", &num );

    
    
    if (num == 1 )  {

        printf("janeiro");

    } else if (num == 2 ){

        printf("fevereiro");

    }else if( num ==3){

        printf("março");

    }else if(num==4 ){

        printf("abril");

    }else if(num==5){

        printf("maio");

    }else if(num==6){

        printf("junho");

    }else if(num==7){

        printf("julho");

    }else if(num==8){

        printf("agosto");

    }else if(num==9){

        printf("setembro");

    }else if(num==10){

        printf("outubro");

    }else if(num==11){

        printf("novenbro");


    }else{

        printf("dezembro");
    }
    
return 0;
}

//Q11

//Q12

//Q13
#include <stdio.h>
#include <string.h>

int main() {
    int numero ; 

    printf("Digite o numero: ");
    scanf("%d",&numero );

    
    
    if (numero % 5== 0 && numero % 3== 0){                         

        printf("%d eh diviisivel por 3 e 5 ", numero );

    }else {
        printf("%d nao eh divisivel por 3 e 5", numero);
    } 
    
return 0;
}

//Q14
#include <stdio.h>
#include <string.h>

int main() {
    char dia[100] ; 

    printf("Digite o dia: ");
    scanf("%s",dia );

    
    
    if (strcmp(dia,"segunda")== 0)  {                         

        printf("dia útil");

    }else if(strcmp(dia,"terça")== 0){                                 

        printf("dia útil");

    }else if (strcmp(dia,"quarta")== 0){ 

        printf("dia útil");

    }else  if (strcmp(dia,"quinta")== 0){

        printf("dia útil");

    }else if (strcmp(dia,"sexta")== 0) {

        printf("dia útil");

    }else  if (strcmp(dia,"sabado")== 0){

        printf("final de semana");

    }else if (strcmp(dia,"domingo")== 0){

        printf("final de semana");
    }else {
        printf("tente novamente");
    } 
    
return 0;
}

//Q15
#include <stdio.h>

int main() {
    int num ; 

    printf("Digite o numero: ");
    scanf("%d", &num );

    
    
    switch(num){
    case 1:
         printf("Muito bom \n"); 
         break;                         

    case 2:
        printf(" Bom \n");
        break;                         
                                
    case 3 :
        printf(" Regular \n");
        break;                         

    case 4:

        printf(" Insuficiente \n");
        break;                         

    case 5:

        printf("Muito insuficiente \n");
        break;                                             
    
    default:
        printf("numero invalido ");
        break;                         

    }
    
return 0;
}


//Q16  
#include <stdio.h>

int main() {
    int num ; 

    printf("Digite o numero: ");
    scanf("%d", &num );

    
    
    switch(num){
    case 1:
         printf("sabado"); 
         break;                         

    case 2:
        printf("segunda");
        break;                         
                                
    case 3 :
        printf("terça\n");
        break;                         

    case 4:

        printf("quarta\n");
        break;                         

    case 5:

        printf("quinta\n");
        break;                         

    case 6:

        printf("sexta\n");
        break;                         

    case 7: 

        printf("domingo\n");
        break;
    default:
        printf("numero invalido ");
        break;                          
}
    
return 0;
}

//Q17
//Q18
#include <stdio.h>

int main() {
    int idade ; 

    printf("Digite a idade: ");
    scanf("%d", &idade );

    
    
    if (idade <= 1) {

        printf("um bebe");

    } else if (idade <= 12  ){

        printf("criança");

    }else if( idade > 12 && idade < 18  ){

        printf("adolecente");

    }else{

        printf("adulto");
    }
    
return 0;
}

//Q19
#include <stdio.h>

int main() {
    char estadoCivil[20]; 

    printf("Por favor, insira seu estado civil (solteiro, casado, divorciado ou viúvo):");

    scanf("%s", estadoCivil );

    
    
    switch(estadoCivil[0] ){
    case 's' :
         printf(" voce eh solteiro \n"); 
         break;                         

    case 'v':
        printf(" voce eh viuvo \n");
        break;                         
                                
    case 'c':
        printf("voce eh casado \n");
        break;                         

    case 'd':

        printf("voce eh divorciado  \n");
        break;                                                        
    
    default:
        printf(" invalido");
        break;                         

    }
    
return 0;
}

//Q20
#include <stdio.h>

int main() {
    int num1 ; 
    int num2 ;
    int num  ;
    float resultado ;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1 );

    printf("Digite o segundo numero: ");
    scanf("%d", &num2 );

    printf("1 - Soma\n");
    printf("2 - Subtraçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - Divisao\n");
    scanf("%d",&num);


    switch(num){
    case 1:
            resultado = num1+num2 ;
         printf("o resultado eh %.2f", resultado); 
         break;                         

    case 2:
            resultado= num1-num2 ;
        printf("o resultado eh %.2f ", resultado);
        break;                         
                                
    case 3 :
            resultado= num1*num2;
        printf("o resultado eh %.2f ", resultado);
        break;                         

    case 4:
           if(num2 != 0) {
               resultado = (float)num1 / num2;
                printf("o resultado eh %.2f ", resultado);
            } else {
                printf("Erro: divisão por zero\n");
        }
        break;                         

    
    default:
        printf("numero invalido\n");                         

    }
    
return 0;
}


