#include<stdio.h>

void converte(int mph, int* kmh, int* mps){

    *kmh = mph * 1.609;
    *mps = (*kmh) * 1000;

    return;
}// função conversora 


int main(){

    int m_h, km_h, mp_s;

    printf("Digite a velocidade em milhas por hora: ");
    scanf("%d", &m_h);

    converte(m_h, &km_h, &mp_s);

    printf("O valor convertido em Kilometros por hora é de %d (Km/h)\n", km_h);
    printf("O valor convertido em Metros por segundo é de %d (M/s)\n", mp_s);

    return 0;
}//main