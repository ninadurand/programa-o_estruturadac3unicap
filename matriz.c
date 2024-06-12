//Questao 1:
#include <stdio.h>

int main (){
    int matriz[4][4];
    int valores_maiores10 = 0;
    for (int i = 0;i < 4; i++ ){
        for(int j = 0; j < 4;j ++){
            printf(" informe o numero na posição [%d][%d]:\n",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                valores_maiores10 +=1;
            }

        }
    }
    for (int i = 0;i< 4; i++ ){
        for(int j = 0; j<4;j ++){
            printf(" o valor dentro da matriz na posição [%d][%d] é :%d\n",i,j,matriz[i][j]);
        }
    }
    printf("os numeros maiores que 10 foram :%d",valores_maiores10);



}

//Questao 2:
#include <stdio.h>

int main (){
    int matriz[5][5];
    for (int i = 0;i < 5; i++ ){
        for(int j = 0; j < 5;j ++){
            if(i == j ){
                matriz[i][j]=1;
            }
            else{
                matriz[i][j]= 0;
                }
    }
    }


for (int i = 0;i < 5; i++ ){
    for(int j = 0 ;j<5 ;j++){
        printf("%d ",matriz[i][j] );

}  
    printf("\n");

}

}

//Questao 3:
#include <stdio.h>


int main(){


    int matriz[5][5];

    for ( int i = 0 ;i<5;i++){
        for(int j = 0 ;j<5;j++){
            matriz[i][j]=i*j;

        }
    }

    for (int i = 0;i < 5; i++ ){
        for(int j = 0 ;j< 5 ;j++){
        printf("%4d ",matriz[i][j] );

}  
    printf("\n");

}

}
//Questao 4:
#include <stdio.h>

int main (){
    int matriz[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int maior = 0;
    int coluna;
    int linha;

    for( int i = 0 ;i<4;i++){
        for( int j =0;j<4;j++){
            printf("%4d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    


    for( int i = 0 ;i<4;i++){
        for( int j = 0 ;j<4;j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                coluna=j;
                linha =i;
            }
        }
    }
    printf(" o maior termo da matriz 4x4 foi o %d:\n",maior);
    printf(" o termo esta na posição [%d][%d] :\n",linha,coluna );

}
//Questao 5:
#include <stdio.h>
int buscarX(int matriz[5][5],int numero_buscado,int *linhaX,int *colunaX){
    for(int i = 0 ; i<5 ; i++){
        for(int j =0 ; j<5 ; j++){
            if(matriz[i][j]==numero_buscado){
                *linhaX=i;
                *colunaX=j;
                return 0;
            }
        }
    
    }
    return -1 ;
}
int main (){
    int matriz[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int numero_buscado;
    int linhaX,colunax;
    printf(" informe o valor que voce quer buscar na matriz 4x4 , o valor do X  :\n");
    scanf("%d",&numero_buscado);

    printf("");

    for( int i = 0 ;i<5;i++){
        for( int j =0;j<5;j++){
            printf("%4d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    int resultado = buscarX(matriz,numero_buscado,&linhaX,&colunax);
    if(resultado==-1){
        printf(" o numero nao foi encontrado %d.\n",numero_buscado);
    }else{
        printf("O numero buscado %d esta na posição [%d][%d]:\n",numero_buscado,linhaX,colunax);
    }
}
//Questao 6:
#include <stdio.h>

int main (){
    int matriz_1[4][4]={{10,20,30,40},{1,2,3,4},{70,80,90,100},{5,6,9,11}};
    int matriz_2[4][4]={{11,19,31,44},{3,4,1,2},{65,81,91,99},{6,5,8,12}};
    int matriz_3[4][4];
    
    printf("Matriz_1 :\n");
    for (int i = 0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            printf("%4d",matriz_1[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");
    printf("Matriz_2 :\n");
    for (int i = 0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            printf("%4d",matriz_2[i][j]);
        }
    printf("\n");
    }

  for (int i = 0 ; i<4 ; i++){
        for(int j = 0 ; j<4 ; j++){
            if(matriz_1[i][j] >matriz_2[i][j]){
                matriz_3[i][j]=matriz_1[i][j];

            }else if(matriz_2[i][j]>matriz_1[i][j]){
                matriz_3[i][j]=matriz_2[i][j];
            }
        }
    
    }
    printf("\n\n");
    printf("matriz_3:\n");
    for( int i = 0  ;i<4; i++){
        for( int j =0 ; j<4; j++){
            printf("%4d",matriz_3[i][j]);
        }
    printf("\n");
    }

    


}
//Questao 7:
#include <stdio.h>

int main (){
    int matriz[10][10];
    for(int i = 0;i < 10; i++){
        for(int j = 0;j<10; j++){
            if(i==j){
                matriz[i][j]= 3* (i*i);
 
            }else if(i<j){
                matriz[i][j]=(2*i)+(7*j);

            }else if(i>j){
                matriz[i][j]=5*(j*j);

            }

        }
    }
    for(int i = 0 ; i<10 ;i++){
        for(int j = 0 ;j<10;j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
}
//Questao 8:
#include <stdio.h>
int main(){
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int soma =0 ;
    for (int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    // Para somar os termos de cima de uma diagonal principal é preciso que apenas o numero de I (linhas) seja menor que o numero de J (coluna)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i < j) {
                
                soma += matriz[i][j];
            }
        }
    }
    printf(" o numero da soma dos numeros que estao acima da diagonal principal é :%d",soma);
}
//Questao 9:
#include <stdio.h>
int main(){
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int soma =0 ;
    for (int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    // Para somar os termos de abaixo da diagonal principal é preciso que apenas o numero de I (linhas) seja maiorque o numero de J (coluna)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i > j) {
                
                soma += matriz[i][j];
            }
        }
    }
    printf(" o numero da soma dos numeros que estao abaixo da diagonal principal é :%d",soma);
}
//Questao 10:
#include <stdio.h>

int main (){
    int matriz[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int soma =0;
    for(int i = 0;i<3;i++){
        for(int j = 0 ;j< 3; j++){
            printf("%4d",matriz[i][j]);
            }
        printf("\n");
        }
    
    for(int i = 0;i<3;i++){
        for(int j = 0 ;j< 3; j++){
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }
    printf("Esse é o valor da soma dos termos da diagonal principal: %d",soma);
}
//Questao 11:
#include <stdio.h>

int main (){
    
    int N_linhas = 3;
    int matriz[3][3]={{3,6,9},{12,15,18},{21,24,27}};
    int Soma_diag_secum = 0;
    
    
    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(i + j == N_linhas - 1){
                Soma_diag_secum +=matriz[i][j];
            }
        }
    }
    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ;j<3 ; j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    printf("O somatorio de numeros da diagonal secundaria é :%d",Soma_diag_secum);

}

//Questao 12:
#include <stdio.h>

int main (){
    
    
    int matriz[3][4]={{3,6,9,5},{12,15,18,5},{21,24,27,5}};
    printf(" Matriz original :\n");

    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ;j<3 ; j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    printf("\n\n");

    printf("Matriz transposta:\n");

    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ;j<3 ; j++){
            printf("%4d",matriz[j][i]);
        }
    printf("\n");
    }
    
}
//Questao 13:
#include <stdio.h>


int main (){
    int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("Matriz Original:\n");
    for(int i = 0; i<4 ; i++){
        for(int j=0 ;j<4; j++ ){
            printf("%4d",matriz[i][j]);

        }
    printf("\n");

    }
    for(int i = 0; i<4 ; i++){
        for(int j=0 ;j<4; j++ ){
            if(i<j){
                matriz[i][j]=0;
            }
        }
    }
    
    printf("Matriz TRanformada:\n");
    for(int i = 0; i<4 ; i++){
        for(int j=0 ;j<4; j++ ){
            printf("%4d",matriz[i][j]);

        }
    printf("\n");

    }
}
//Questao 14:

//Questao 19:
#include <stdio.h>
int soma_c_impares(int matriz[][6]){
    int soma_impares=0;
    for(int i = 0;i<3;i++){
        for(int j =0;j<6;j++){
            if (j%2!=0 ){
                soma_impares+=matriz[i][j];
            }
        }
    }
    return soma_impares;

}

int media_A(int matriz[][6]){
    int media_aritme = 0;
    int numero_temos=0;
    for(int i = 0 ;i<3;i++){
        for(int j =0 ; j < 6;j++){
            if (j==2 || j ==4){
                media_aritme+=matriz[i][j];
                numero_temos+=1;

            }
        }
    }
    media_aritme =media_aritme/numero_temos;
    return media_aritme;

}

void troca_matriz(int matriz[][6]) {
    for (int i = 0; i < 3; i++) {
        int soma_colunas = matriz[i][0] + matriz[i][1]; // Calcula a soma das colunas 1 e 2
        matriz[i][5] = soma_colunas; // Substitui o valor da sexta coluna pela soma
    }
}

void imrpimir(int matriz[][6]){
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<6 ;j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
}

int main (){
    int numero;
    int matriz[3][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
    int resultado;
    printf("informe a sua opção desejada:\n1.Imprima a soma de todos os elementos das colunas ímpares.\n2.Imprima a média aritmética dos elementos da segunda e quarta colunas.\n3.Substitua os valores da sexta coluna pela somados valores das colunas 1 e 2 , e printe a matriz\n");
    scanf("%d",&numero);
    switch (numero)
    {
    case 1:
         resultado =soma_c_impares(matriz);
        
        printf("A soma do numeros das colunas impares sao :%d",resultado);
        
        break;
    
    case 2:
        resultado= media_A(matriz);
        printf("Entao essa é a media aritmetrica da 2 e 4 coluna :%d",resultado);
       
        break;
    
    case 3:
        printf("Essa é a matriz original:\n");
        imrpimir(matriz);
        printf("\n\n");
        troca_matriz(matriz);
        printf("Essa é a matriz modificada :\n");
        imrpimir(matriz);
        break;
 
    default:

        break;
    }



}

//Questao 17 :
#include <stdio.h>

    int main(){
    int matriz_princ[3][3];
    int matriz_resultado[1][3];
    

    printf("informe os numeros inteiros  abaixo no preenchimento de uma matriz\n");
    for(int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){    
            printf("informe na posição:[%d][%d]\n",i,j);
            scanf("%d",&matriz_princ[i][j]);
        }
    }
    printf("=== Èssa foi a matriz informada :=====\n");
    for(int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){    
            printf("%4d",matriz_princ[i][j]);
            
        }
    printf("\n");
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz_resultado[0][j] += matriz_princ[i][j];
        }
    }
    
    
    printf(" essa é a matriz depois :\n");
    for(int i = 0;i<1;i++){
        for(int j = 0 ;j<3;j++){    
            printf("%4d",matriz_resultado[i][j]);
            
        }
    printf("\n");
    

}
}

//Questao 20:
#include <stdio.h>
void Soma_matrizes(int matriz_1[][2],int matriz_2[][2],int matriz_resultante[][2]){
    for(int i=0 ;i<2 ;i++){
        for(int j = 0 ;j<2; j++){
            matriz_resultante[i][j]=matriz_1[i][j]+matriz_2[i][j];
            
        }
    }
}
void imprimir_matriz(int matriz[][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}
void subtracao_M(int matriz_1[][2],int matriz_2[][2],int matriz_resultante[][2]){
    for(int i = 0 ;i<2;i++ ){
        for(int j =0 ; j < 2; j++){
            matriz_resultante[i][j]= matriz_1[i][j]-matriz_2[i][j];
        }
    }
}




int main(){
    int matriz_1[2][2]={{1,2},{3,4}};
    int matriz_2[2][2]={{5,6},{7,8}};
    int matriz_resultante[2][2]; 
    int numero_informado;

    printf("Informe a Opção desejada:\n1-soma das duas matrizes: \n2-subtrair as duas matrizes: \n3-imprimir as duas matrizes:\n");
    scanf("%d",&numero_informado);
   
    //SOma das duias matrizes:
    if(numero_informado==1){
        Soma_matrizes(matriz_1,matriz_2,matriz_resultante);
        printf(" matriz resultante da soma foi :\n");
        imprimir_matriz(matriz_resultante);
    
   //
    }else if(numero_informado==2){
            subtracao_M(matriz_1,matriz_2,matriz_resultante);
            printf("entao a subtração das matrizes foi :\n");
            imprimir_matriz(matriz_resultante);
        

    }else if(numero_informado==3){
        printf("matriz 1:\n");
        imprimir_matriz(matriz_1);
        printf("\n\n");
        printf("matriz 2 :\n");
        imprimir_matriz(matriz_2);
    }
}
    


//Questao 21:
#include <stdio.h>

int main (){
    int matriz_A[3][3] ={{4,5,6},{15,12,13},{1,2,3}};
    int matriz_B[3][3]={{9,10,11},{2,1,9},{1,2,3}};
    int matriz_C[3][3];
    

    printf("Matriz A:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_A[i][j]);
        }
    printf("\n");
    }
    printf("\n\n");
    printf("Matriz B:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_B[i][j]);
        }
    printf("\n");
    }
    
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3  ;j ++){
            matriz_C[i][j] = matriz_A[i][j]*matriz_B[i][j];
        }
    }
    printf("\n\n");
    printf("matriz C:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_C[i][j]);
        }
    printf("\n");
    }
    return 0 ;
}
//questao 22 :
#include <stdio.h>

int main() {
    int A[3][3];
    int B[3][3];

    
    printf("Informe os elementos da matriz 3x3 A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Informe o elemento [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            B[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    
    printf("\nA matriz A^2 é:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
