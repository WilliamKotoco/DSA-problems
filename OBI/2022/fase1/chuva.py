N = int(input())

S = int(input())


# aplica o casting para inteiro para cada item do input splitado por espaço, e tudo isso é convertido em uma list
chuvas = list(map(int, input().split()))


intervals = 0
for i in range(0, N):
    current_sum = 0
    current = i
    while current < N:
        current_sum += chuvas[current]
        if current_sum == S:
            intervals += 1
        elif current_sum > S:
            break
        current += 1
print(intervals)
