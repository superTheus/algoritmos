#include <stdio.h>

int main()
{
    int list[1000], i, number, limit = 1000, start = 0, middle = 0, find = 0, attempt = 0;

    printf("Criando lista com numeros ramdomicos...\n");
    for (i = 0; i < 1000; i++)
    {
        list[i] = i + 1;
    }

    printf("Lista criada com sucesso!\n");
    printf("Digite um numero para buscar na lista: \n");
    scanf("%d", &number);

    while (start <= limit)
    {
        attempt++;
        middle = (start + limit) / 2;
        find = list[middle];
        if (number == find)
        {
            printf("Numero encontrado na posicao %d\n", middle);
            printf("Numero de tentativas para encontrar a posicao: %d\n", attempt);
            return 0;
        }
        else if (number < find)
        {
            limit = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }

    printf("Numero nao encontrado na lista\n");
    return 0;
}