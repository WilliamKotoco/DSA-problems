#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vitorias = 0;

    for (int i = 0; i < 6; i++)
    {
        char result;
        scanf(" %c", &result);

        if (result == 'V')
        {
            vitorias++;
        }
    }
    

    if (vitorias > 4 )
        printf("1 \n");
    else if (vitorias < 4 && vitorias > 2)
        printf("2 \n");
    else if (vitorias < 2 && vitorias > 0)
        printf("3 \n");        
    else
        printf("-1 \n");

    return 0;
}
