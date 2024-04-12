#include <stdio.h>

int main()
{

    int N, C;
    scanf("%d %d", &N, &C);
    int infectou[N+1];
    int infectada[N+1];

    int infectante, num_ciclo, aux;
    for (int i =  1; i <= N; i++)
        infectou[i] = infectada[i] = 0;

    for (int i = 0; i < C; i++)
    {
        scanf("%d %d", &infectante, &num_ciclo);
        for (int j = 0; j < num_ciclo; j++)
        {
            scanf("%d", &aux);
            infectada[aux] = 1;
        }

    }

    for (int i = 1; i <= N; i++)
    {
        if (!infectada[i])
            printf("%d\n", i);
    }

}