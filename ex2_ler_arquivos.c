#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Criar uma Estrutura de Dado
typedef struct {
    char nome[20];
    float n1;
    float n2;
    float n3;
}Aluno;


int main(){

    FILE* arq;       // Criar um tipo de arquivo
    Aluno alunos;

// Abertura de Arquivo
    arq = fopen("ex2.txt", "r");
    if (arq == NULL){
        perror("Erro ao abrir arquivo\n");
    }//if
    
// Ler os dados do arquivo e salvar no vetor (array) Alunos
    fscanf(arq,"%s %f %f %f", alunos.nome, &alunos.n1, &alunos.n2, &alunos.n3);
    
    fclose(arq);

// Prova real de Carregamento de dados do Arquivo (HD) para Vetor (Memória em RAM)
    printf("%s tem seguintes notas: \n %f \n %f \n %f \n", alunos.nome, alunos.n1, alunos.n2, alunos.n3);
    
    return 0;
}//main
