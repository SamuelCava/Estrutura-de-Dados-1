#include<stdio.h>
#include<stdlib.h>

// Criar uma Estrutura de Dado
typedef struct {
    char nome[20];
    float n1;
    float n2;
    float n3;
}Aluno;

int main(){

    FILE* arq;       // Criar um tipo de arquivo
    Aluno alunos[4];

// Abertura de Arquivo
    arq = fopen("ex2.txt", "w");
    if (arq == NULL){
        perror("Erro ao abrir arquivo\n");
    }//if
    
// Ler os dados do arquivo e salvar no vetor (array) Alunos
    for (int i = 0; i < 4; i++){
        fscanf(arq,"%s %f %f %f", alunos[i].nome, &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    }//for
    
    fclose(arq);

// Prova real de Carregamento de dados do Arquivo (HD) para Vetor (Memória em RAM)
    for (size_t i = 0; i < 4; i++){
        printf("%s tem seguintes notas: %d \n %d \n %d \n", alunos[i].nome, alunos[i].n1, alunos[i].n2, alunos[i].n3);
    }//for

    return 0;
}//main
