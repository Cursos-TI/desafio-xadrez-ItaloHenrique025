#include <stdio.h>

int main(){

    for (int i = 0; i < 8; i++)
    {
        printf("A Rainha moveu-se para a esquerda \n");
    } //esse codigo movimenta a rainha

    printf("Vez do adversario! \n");
    
    int i = 1;

    while (i <= 6)
    {
        printf("A Torre moveu-se para a direita \n");
        i++;
    }//esse codigo movimenta a torre

    printf("Sua Vez! \n");

     int b = 1;
    do
    {// esse codigo movimenta o bispo
        printf("O Bispo moveu-se para cima,direta \n");
        b++;

    } while (b <= 5);
    

    return 0;
}