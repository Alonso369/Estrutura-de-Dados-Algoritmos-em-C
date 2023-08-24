#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que imprime um vetor. Percorra o vetor atrav�s da aritm�tica de ponteiros

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *soma = vet;

    //Exemplo de incremento de poteiro, voc� pode usar o decremente e incremento para
    //fazer o ponteiro se mover para o pr�ximo elementos do Array
    for(int i = 0; i < 5; i++){
        soma++;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo ind�ce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //Voc� pode somar ou subtrair um valor de um ponteiro para mover-se por uma quantidade
    //especifica da quantidade de elementos do arrays
    printf("\n");
    for(int i = 0; i < 5; i++){
        soma = soma + 2;//Movendo o ponteiro para o proximo indice
        printf("Vetor esta na posicao: %d\n", soma);//Imprimindo o proximo ind�ce
        printf("Valor do vetor: %d\n", vet[i]);
        printf("\n");
    }

    //Subtrair um ponteiro de outro ponteiro resulta na diferen�a entre os �nidices
    //dos elementos aos quais eles apontam
    //Bom para calcular a distancia netre dos arrays
    int *pont1 = &vet[1];
    int *pont2 = &vet[5];

    int diff = pont2 - pont1;

    printf("Valor: %d\n", diff);

    return 0;
}