#include<stdio.h>
#include<stdlib.h>

// Criar uma Estrutura de Dado
typedef struct {
    char nome[20];
    float n1;
    float n2;
    float n3;
}Aluno;

// FUnção para exibir as informações
void exibe (Aluno* turma[], int tam){
    float media;
    for (size_t i = 0; i < tam; i++){
        printf("%s tem seguintes notas: %f \n %f \n %f \n", turma[i].nome, &turma[i].n1, &turma[i].n2, &turma[i].n3);
    }//for
};




int main(){

    FILE* arq;       // Criar um tipo de arquivo
    Aluno alunos[4];

// Abertura de Arquivo
    arq = fopen("ex2.txt", "r");
    if (arq == NULL){
        perror("Erro ao abrir arquivo\n");
    }//if
    
// Ler os dados do arquivo e salvar no vetor (array) Alunos
    for (int i = 0; i < 4; i++){
        fscanf(arq,"%s %f %f %f", alunos[i].nome, &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    }//for
    
    fclose(arq);

    return 0;
}//main
