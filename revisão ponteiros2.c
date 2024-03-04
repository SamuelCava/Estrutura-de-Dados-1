#include<stdio.h>

int main(){

    int n = 14;

    int* p;

    p = &n;

    *p = 25;    // Aqui atribui o valor 25 ao endereço de memória em que o ponteiro p está apontando

    printf("Aqui vamos exibir O VALOR DA VARIÁVEL EM QUE O PONTEIRO APONTA: %i\n", *p);

    return 0;
}//main