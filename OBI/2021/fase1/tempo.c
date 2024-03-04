#include <stdio.h>

int main(int argc, char const *argv[])
{

    int N;
    scanf("%d", &N);

    int recebidas[101] = {0}; /// o indice vai ser quem enviou
    // int enviados[101]; /// indice vai ser para quem foi enviado
    int tempo[101] = {0}; /// tempo para cada amigo



    int global_time = 0;
    for (int i = 0; i < N; i++)
    {
        char op;
        int id;
        scanf(" %c %d", &op, &id);

        switch (op)
        {
        case 'R':
            recebidas[id] = global_time;
            global_time++;
            break;

        case 'E':
            tempo[id] += global_time - recebidas[id];
            recebidas[id] = 0;
            global_time++;

            break;
        default:
            global_time += id - 1;
            break;
        }
    }


    for (int i = 0; i < 101; i++)
    {
        if (tempo[i] != 0 && recebidas[i] == 0) /// todas mensagens foram respondidas
            printf("%d %d \n", i, tempo[i] );
        else if (recebidas[i] > 0)        
            printf("%d %d \n", i, -1);
    }
    return 0;
}
