#include <stdio.h>

void movimento(int casas){
    if (casas > 0){
        printf("A Rainha moveu-se para a esquerda \n");
        movimento(casas - 1);
    }
     
}
void torre(int casas){

    if(casas > 0){

        printf("A Torre moveu-se para a direita \n");
        torre(casas - 1);

    }
}
void bispo(int casas){

    for (casas = 0; casas <= 4; casas++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("O Bispo moveu-se para Direita,");
        }
        printf("Cima \n");
    }
    

}


int main(){   
    
    printf("Sua vez... \n");
    movimento(8);
    printf("Vez do adversario... \n");
    torre(5);
    printf("Sua vez... \n");
    bispo(5);
    printf("Vez do adversario... \n");

    for (int i = 0; i < 2; i++)
    {
        printf("O cavalo Moveu-se para cima \n");
    }

    for (int i = 0; i < 1; i++)
    {
        printf("O cavalo Moveu-se para direita \n");
    }
    return 0;
}