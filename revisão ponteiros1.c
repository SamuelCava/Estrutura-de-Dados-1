#include<stdio.h>

int main(){

    int n = 14;

    int* p;

    p = &n; // Atribuir o endereço de memória da variável n para o ponteiro p

    printf("Aqui vamos exibir O VALOR DA VARIÁVEL EM QUE O PONTEIRO APONTA: %i\n", *p);

    return 0;
}//main