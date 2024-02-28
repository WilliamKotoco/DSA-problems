N = int(input())

linha_errada = 0
coluna_errada = 0
matriz = []
somas = []

for i in range(0, N):
    soma_linha = 0
    linha = []
    for j in range(0, N):
        val = int(input())
        linha.append(val)

        if val == 0:
            linha_errada = i
            coluna_errada = j
        soma_linha += val

    somas.append(soma_linha)

    matriz.append(linha)

tmp = somas[linha_errada]
somas[linha_errada] = somas[0]
somas[0] = tmp

print(
    abs(somas[0] - somas[linha_errada]), linha_errada + 1, coluna_errada + 1, sep="\n"
)
