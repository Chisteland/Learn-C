#include <stdio.h>

int main()
{
    int num; // Declarando a variável inteira "num" para armazenar o valor do número inserido pelo usuário
    int r, col = 1;
    printf("Digite o número de linhas: ");
    scanf("%d", &r); // Corrigido o erro de sintaxe no scanf
    
    for(int i = 0; i < r; i++) // loop externo para exibir as linhas
    {
        for(int j = 0; j < r - i; j++) // loop interno para exibir espaços
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) // loop interno para exibir números
        {
            if(j == 0 || i == 0)
                col = 1;
            else
                col = col * (i - j + 1) / j;
            printf("%4d", col);
        }
        printf("\n");
    }
    return 0;
}